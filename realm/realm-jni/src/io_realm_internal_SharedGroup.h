/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class io_realm_internal_SharedGroup */

#ifndef _Included_io_realm_internal_SharedGroup
#define _Included_io_realm_internal_SharedGroup
#ifdef __cplusplus
extern "C" {
#endif
#undef io_realm_internal_SharedGroup_IMPLICIT_TRANSACTION
#define io_realm_internal_SharedGroup_IMPLICIT_TRANSACTION 1L
#undef io_realm_internal_SharedGroup_EXPLICIT_TRANSACTION
#define io_realm_internal_SharedGroup_EXPLICIT_TRANSACTION 0L
#undef io_realm_internal_SharedGroup_CREATE_FILE_YES
#define io_realm_internal_SharedGroup_CREATE_FILE_YES 0L
#undef io_realm_internal_SharedGroup_CREATE_FILE_NO
#define io_realm_internal_SharedGroup_CREATE_FILE_NO 1L
#undef io_realm_internal_SharedGroup_ENABLE_REPLICATION
#define io_realm_internal_SharedGroup_ENABLE_REPLICATION 1L
#undef io_realm_internal_SharedGroup_DISABLE_REPLICATION
#define io_realm_internal_SharedGroup_DISABLE_REPLICATION 0L
/*
 * Class:     io_realm_internal_SharedGroup
 * Method:    createNativeWithImplicitTransactions
 * Signature: (JI[B)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_SharedGroup_createNativeWithImplicitTransactions
  (JNIEnv *, jobject, jlong, jint, jbyteArray);

/*
 * Class:     io_realm_internal_SharedGroup
 * Method:    nativeCreateLocalReplication
 * Signature: (Ljava/lang/String;[B)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_SharedGroup_nativeCreateLocalReplication
  (JNIEnv *, jobject, jstring, jbyteArray);

/*
 * Class:     io_realm_internal_SharedGroup
 * Method:    nativeCreateSyncReplication
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_SharedGroup_nativeCreateSyncReplication
  (JNIEnv *, jobject, jstring);

/*
 * Class:     io_realm_internal_SharedGroup
 * Method:    nativeCommitAndContinueAsRead
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_SharedGroup_nativeCommitAndContinueAsRead
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_SharedGroup
 * Method:    nativeBeginImplicit
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_SharedGroup_nativeBeginImplicit
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_SharedGroup
 * Method:    nativeReserve
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_SharedGroup_nativeReserve
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_SharedGroup
 * Method:    nativeHasChanged
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_io_realm_internal_SharedGroup_nativeHasChanged
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_SharedGroup
 * Method:    nativeBeginRead
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_SharedGroup_nativeBeginRead
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_SharedGroup
 * Method:    nativeEndRead
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_SharedGroup_nativeEndRead
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_SharedGroup
 * Method:    nativeBeginWrite
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_SharedGroup_nativeBeginWrite
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_SharedGroup
 * Method:    nativeCommit
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_SharedGroup_nativeCommit
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_SharedGroup
 * Method:    nativeRollback
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_SharedGroup_nativeRollback
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_SharedGroup
 * Method:    nativeCreate
 * Signature: (Ljava/lang/String;IZZ[B)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_SharedGroup_nativeCreate
  (JNIEnv *, jobject, jstring, jint, jboolean, jboolean, jbyteArray);

/*
 * Class:     io_realm_internal_SharedGroup
 * Method:    nativeCompact
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_io_realm_internal_SharedGroup_nativeCompact
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_SharedGroup
 * Method:    nativeClose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_SharedGroup_nativeClose
  (JNIEnv *, jclass, jlong);

/*
 * Class:     io_realm_internal_SharedGroup
 * Method:    nativeCloseReplication
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_SharedGroup_nativeCloseReplication
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_SharedGroup
 * Method:    nativeRollbackAndContinueAsRead
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_SharedGroup_nativeRollbackAndContinueAsRead
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_SharedGroup
 * Method:    nativeGetVersionID
 * Signature: (J)[J
 */
JNIEXPORT jlongArray JNICALL Java_io_realm_internal_SharedGroup_nativeGetVersionID
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_SharedGroup
 * Method:    nativeWaitForChange
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_io_realm_internal_SharedGroup_nativeWaitForChange
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_SharedGroup
 * Method:    nativeStopWaitForChange
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_SharedGroup_nativeStopWaitForChange
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_SharedGroup
 * Method:    nativeAdvanceRead
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_SharedGroup_nativeAdvanceRead
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_SharedGroup
 * Method:    nativeAdvanceReadToVersion
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_SharedGroup_nativeAdvanceReadToVersion
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_SharedGroup
 * Method:    nativePromoteToWrite
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_SharedGroup_nativePromoteToWrite
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
