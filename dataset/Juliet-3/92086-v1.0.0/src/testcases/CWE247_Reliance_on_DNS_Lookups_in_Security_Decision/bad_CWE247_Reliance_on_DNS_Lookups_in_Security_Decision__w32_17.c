void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        {
            WSADATA wsaData;
            BOOL wsaDataInit = FALSE;
            SOCKET listenSocket = INVALID_SOCKET;
            SOCKET client = INVALID_SOCKET;
            struct sockaddr_in service;
            struct sockaddr_in serviceClient;
            int serviceClientLen;
            struct hostent *hostInfo;
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
                serviceClientLen = sizeof(serviceClient);
                client = accept(listenSocket, (struct sockaddr*)&serviceClient, &serviceClientLen);
                if (client == INVALID_SOCKET)
                {
                    break;
                }
                if (serviceClient.sin_family != AF_INET)
                {
                    break;
                }
                hostInfo = gethostbyaddr((char*)&serviceClient.sin_addr, sizeof(serviceClient.sin_addr), AF_INET);
                if (hostInfo == NULL)
                {
                    break;
                }
                if (hostInfo->h_name == NULL)
                {
                    break;
                }
                printLine(hostInfo->h_name);
<START>
                if (strcmp(hostInfo->h_name, SECRET_HOSTNAME) == 0)
<END>
                {
                    printLine("Access granted.");
                }
            }
            while (0);
            if (client != INVALID_SOCKET)
            {
                closesocket(client);
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
