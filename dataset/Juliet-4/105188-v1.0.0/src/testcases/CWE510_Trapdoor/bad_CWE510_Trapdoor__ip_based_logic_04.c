static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    if(STATIC_CONST_TRUE)
    {
        {
            WSADATA wsaData;
            int wsaDataInit = 0;
            struct sockaddr_in service, acceptService;
            int acceptServiceLen = sizeof(acceptService);
            SOCKET listenSocket = INVALID_SOCKET;
            SOCKET acceptSocket = INVALID_SOCKET;
            do
            {
                if (WSAStartup(MAKEWORD(2,2), &wsaData) != NO_ERROR)
                {
                    break;
                }
                wsaDataInit = 1;
                listenSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
                if (listenSocket == INVALID_SOCKET)
                {
                    break;
                }
                memset(&service, 0, sizeof(service));
                service.sin_family = AF_INET;
                service.sin_addr.s_addr = INADDR_ANY;
                service.sin_port = htons(20000);
                if (bind(listenSocket, (struct sockaddr*)&service, sizeof(service)) == SOCKET_ERROR)
                {
                    break;
                }
                if (listen(listenSocket, 5) == SOCKET_ERROR)
                {
                    break;
                }
                acceptSocket = accept(listenSocket, NULL, NULL);
                if (acceptSocket == SOCKET_ERROR)
                {
                    break;
                }
                if (getsockname(acceptSocket, (struct sockaddr *)&acceptService, &acceptServiceLen) == -1)
                {
                    break;
                }
<START>
                if (strcmp("192.168.30.123", inet_ntoa(acceptService.sin_addr)) == 0)
<END>
                {
                    if (send(acceptSocket, ADMIN_MESSAGE, strlen(ADMIN_MESSAGE), 0) ==  SOCKET_ERROR)
                    {
                        break;
                    }
                }
                else
                {
                    if (send(acceptSocket, DEFAULT_MESSAGE, strlen(DEFAULT_MESSAGE), 0) == SOCKET_ERROR)
                    {
                        printLine("Send failed!");
                    }
                }
            }
            while (0);
            if (listenSocket != INVALID_SOCKET)
            {
                CLOSE_SOCKET(listenSocket);
            }
            if (acceptSocket != INVALID_SOCKET)
            {
                CLOSE_SOCKET(acceptSocket);
            }
            if (wsaDataInit)
            {
                WSACleanup();
            }
        }
    }
}
