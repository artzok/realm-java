/*
 * Copyright 2014 Realm Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package io.realm.internal;

import io.realm.RealmModel;
import io.realm.RealmObject;

public class Util {

    static {
        // Any internal class with static native methods that uses Realm Core must load the Realm Core library
        // themselves as it otherwise might not have been loaded.
        RealmCore.loadLibrary();
    }

    public static long getNativeMemUsage() {
        return nativeGetMemUsage();
    }
    static native long nativeGetMemUsage();

    // Set to level=1 to get some trace from JNI native part.
    public static void setDebugLevel(int level) {
        nativeSetDebugLevel(level);
    }
    static native void nativeSetDebugLevel(int level);

    // Called by JNI. Do not remove
    static void javaPrint(String txt) {
        System.out.print(txt);
    }

    public static String getTablePrefix() {
        return nativeGetTablePrefix();
    }
    static native String nativeGetTablePrefix();


    // Testcases run in nativeCode
    public enum Testcase {
        Exception_ClassNotFound(0),
        Exception_NoSuchField(1),
        Exception_NoSuchMethod(2),
        Exception_IllegalArgument(3),
        Exception_IOFailed(4),
        Exception_FileNotFound(5),
        Exception_FileAccessError(6),
        Exception_IndexOutOfBounds(7),
        Exception_TableInvalid(8),
        Exception_UnsupportedOperation(9),
        Exception_OutOfMemory(10),
        Exception_FatalError(11),
        Exception_RuntimeError(12),
        Exception_RowInvalid(13),
        Exception_EncryptionNotSupported(14),
        Exception_CrossTableLink(15),
        Exception_BadVersion(16),
        Exception_IncompatibleLockFile(17);

        private final int nativeTestcase;
        Testcase(int nativeValue) {
            this.nativeTestcase = nativeValue;
        }

        public String expectedResult(long parm1) {
            return nativeTestcase(nativeTestcase, false, parm1);
        }
        public String execute(long parm1) {
            return nativeTestcase(nativeTestcase, true, parm1);
        }
    }

    static native String nativeTestcase(int testcase, boolean dotest, long parm1);

    /**
     * Normalizes a input class to it's original RealmObject class so it is transparent whether or not the input class
     * was a RealmProxy class.
     */
    public static Class<? extends RealmModel> getOriginalModelClass(Class<? extends RealmModel> clazz) {
        //This cast is correct because 'clazz' is either the type
        //generated by RealmProxy or the original type extending directly from RealmObject
        @SuppressWarnings("unchecked")
        Class<? extends RealmModel> superclass = (Class<? extends RealmModel>) clazz.getSuperclass();

        if (!superclass.equals(Object.class) && !superclass.equals(RealmObject.class)) {
            clazz = superclass;
        }

        return clazz;
    }

    public static long calculateExponentialDelay(int failedAttempts, long maxDelayInMs) {
        // https://en.wikipedia.org/wiki/Exponential_backoff
        //Attempt 1     0s     0s
        //Attempt 2     2s     2s
        //Attempt 3     4s     4s
        //Attempt 4     8s     8s
        //Attempt 5     16s    16s
        //Attempt 6     32s    32s
        //Attempt 7     64s    1m 4s
        //Attempt 8     128s   2m 8s
        //Attempt 9     256s   4m 16s
        //Attempt 10    512    8m 32s
        //Attempt 11    1024   17m 4s
        //Attempt 12    2048   34m 8s
        //Attempt 13    4096   1h 8m 16s
        //Attempt 14    8192   2h 16m 32s
        //Attempt 15    16384  4h 33m 4s
        double SCALE = 1.0D; // Scale the exponential backoff
        double delayInMs = ((Math.pow(2.0D, failedAttempts) - 1d) / 2.0D) * 1000 * SCALE;

        // Just use maximum back-off value. We are not afraid of many threads using this value
        // to trigger at once.
        return maxDelayInMs < delayInMs ? maxDelayInMs : (long) delayInMs;
    }


}
