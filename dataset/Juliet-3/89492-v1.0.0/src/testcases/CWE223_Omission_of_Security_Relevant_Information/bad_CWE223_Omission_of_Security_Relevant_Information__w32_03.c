void FUN0()
{
    if(5==5)
    {
        {
            WSADATA wsaData;
            BOOL wsaDataInit = FALSE;
            SOCKET listenSocket = INVALID_SOCKET;
            SOCKET acceptSocket = INVALID_SOCKET;
            struct sockaddr_in service;
            char username[USERNAME_SZ+1];
            HANDLE pHandle;
            do
            {
                if (0 != WSAStartup(MAKEWORD(2, 2), &wsaData))
                {
                    break;
                }
                wsaDataInit = TRUE;
                listenSocket = socket(PF_INET, SOCK_STREAM, 0);
                if (listenSocket == INVALID_SOCKET)
                {
                    break;
                }
                memset(&service, 0, sizeof(service));
                service.sin_family = AF_INET;
                service.sin_addr.s_addr = INADDR_ANY;
                service.sin_port = htons(LISTEN_PORT);
                if (SOCKET_ERROR == bind(listenSocket, (struct sockaddr*)&service, sizeof(service)))
                {
                    break;
                }
                if (SOCKET_ERROR == listen(listenSocket, LISTEN_BACKLOG))
                {
                    break;
                }
                acceptSocket = accept(listenSocket, NULL, NULL);
                if (acceptSocket == INVALID_SOCKET)
                {
                    break;
                }
                if (sizeof(username)-sizeof(char) != recv(acceptSocket, username, sizeof(username)-sizeof(char), 0))
                {
                    break;
                }
                username[USERNAME_SZ] = '\0';
<START>
                fprintf(stderr, "Attempted login\n");
<END>
                if (LogonUserA(
                            username,
                            DOMAIN,
                            PASSWORD, 
                            LOGON32_LOGON_NETWORK,
                            LOGON32_PROVIDER_DEFAULT,
                            &pHandle) != 0)
                {
                    printLine("User logged in successfully.");
                    CloseHandle(pHandle);
                }
                else
                {
                    printLine("Unable to login.");
                }
            }
            while (0);
            if (acceptSocket != INVALID_SOCKET)
            {
                closesocket(acceptSocket);
            }
            if (listenSocket != INVALID_SOCKET)
            {
                closesocket(listenSocket);
            }
            if (wsaDataInit)
            {
                WSACleanup();
            }
        }
    }
}
