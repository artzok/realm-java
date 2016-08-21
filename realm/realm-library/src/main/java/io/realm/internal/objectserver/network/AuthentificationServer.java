package io.realm.internal.objectserver.network;

import java.net.URL;

import io.realm.internal.objectserver.Token;
import io.realm.objectserver.Credentials;

/**
 * Interface for handling communication with the Realm Mobile Platform Authentication Server.
 *
 * Note, any implementation of this class is not responsible for handling retries or error handling, it is
 * only responsible for executing a given network request.
 *
 * All {@link NetworkRequest} are asynchronous and must be manually triggered by calling
 * {@link NetworkRequest#run(OkHttpNetworkRequest.Callback)}.
 */
public interface AuthentificationServer {
    AuthenticateResponse authenticateUser(Credentials credentials, URL authentificationUrl);
    AuthenticateResponse authenticateRealm(Token refreshToken, String path, URL authentificationUrl);
    RefreshResponse refresh(String token, URL authentificationUrl);
}
