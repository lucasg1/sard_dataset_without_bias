void FUN0()
{
    char * data;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    data[0] = '\0';
    {
        WSADATA wsaData;
        int wsaDataInit = 0;
        int recvResult;
        struct sockaddr_in service;
        char *replace;
        SOCKET listenSocket = INVALID_SOCKET;
        SOCKET acceptSocket = INVALID_SOCKET;
        size_t dataLen = strlen(data);
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
            service.sin_port = htons(TCP_PORT);
            if (bind(listenSocket, (struct sockaddr*)&service, sizeof(service)) == SOCKET_ERROR)
            {
                break;
            }
            if (listen(listenSocket, LISTEN_BACKLOG) == SOCKET_ERROR)
            {
                break;
            }
            acceptSocket = accept(listenSocket, NULL, NULL);
            if (acceptSocket == SOCKET_ERROR)
            {
                break;
            }
            recvResult = recv(acceptSocket, (char *)(data + dataLen), sizeof(char) * (100 - dataLen - 1), 0);
            if (recvResult == SOCKET_ERROR || recvResult == 0)
            {
                break;
            }
            data[dataLen + recvResult / sizeof(char)] = '\0';
            replace = strchr(data, '\r');
            if (replace)
            {
                *replace = '\0';
            }
            replace = strchr(data, '\n');
            if (replace)
            {
                *replace = '\0';
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
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        size_t i;
        for (i=0; i < strlen(data); i++)
        {
            if (data[i] == SEARCH_CHAR)
            {
                printLine("We have a match!");
                break;
            }
        }
        free(data);
    }
    break;
    }
}
void FUN1()
{
    char * data;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    data[0] = '\0';
    {
        WSADATA wsaData;
        int wsaDataInit = 0;
        int recvResult;
        struct sockaddr_in service;
        char *replace;
        SOCKET listenSocket = INVALID_SOCKET;
        SOCKET acceptSocket = INVALID_SOCKET;
        size_t dataLen = strlen(data);
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
            service.sin_port = htons(TCP_PORT);
            if (bind(listenSocket, (struct sockaddr*)&service, sizeof(service)) == SOCKET_ERROR)
            {
                break;
            }
            if (listen(listenSocket, LISTEN_BACKLOG) == SOCKET_ERROR)
            {
                break;
            }
            acceptSocket = accept(listenSocket, NULL, NULL);
            if (acceptSocket == SOCKET_ERROR)
            {
                break;
            }
            recvResult = recv(acceptSocket, (char *)(data + dataLen), sizeof(char) * (100 - dataLen - 1), 0);
            if (recvResult == SOCKET_ERROR || recvResult == 0)
            {
                break;
            }
            data[dataLen + recvResult / sizeof(char)] = '\0';
            replace = strchr(data, '\r');
            if (replace)
            {
                *replace = '\0';
            }
            replace = strchr(data, '\n');
            if (replace)
            {
                *replace = '\0';
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
    switch(6)
    {
    case 6:
    {
        size_t i;
        for (i=0; i < strlen(data); i++)
        {
            if (data[i] == SEARCH_CHAR)
            {
                printLine("We have a match!");
                break;
            }
        }
        free(data);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
