void FUN0(char * data, ...)
{
    {
        char dest[100] = "";
        va_list args;
        va_start(args, data);
        vsnprintf(dest, 100-1, "%s", args);
        va_end(args);
        printLine(dest);
    }
}
void FUN1()
{
    int i,k;
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    for(i = 0; i < 1; i++)
    {
        {
            WSADATA wsaData;
            int wsaDataInit = 0;
            int recvResult;
            struct sockaddr_in service;
            char *replace;
            SOCKET connectSocket = INVALID_SOCKET;
            size_t dataLen = strlen(data);
            do
            {
                if (WSAStartup(MAKEWORD(2,2), &wsaData) != NO_ERROR)
                {
                    break;
                }
                wsaDataInit = 1;
                connectSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
                if (connectSocket == INVALID_SOCKET)
                {
                    break;
                }
                memset(&service, 0, sizeof(service));
                service.sin_family = AF_INET;
                service.sin_addr.s_addr = inet_addr(IP_ADDRESS);
                service.sin_port = htons(TCP_PORT);
                if (connect(connectSocket, (struct sockaddr*)&service, sizeof(service)) == SOCKET_ERROR)
                {
                    break;
                }
                recvResult = recv(connectSocket, (char *)(data + dataLen), sizeof(char) * (100 - dataLen - 1), 0);
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
            if (connectSocket != INVALID_SOCKET)
            {
                CLOSE_SOCKET(connectSocket);
            }
            if (wsaDataInit)
            {
                WSACleanup();
            }
        }
    }
    for(k = 0; k < 1; k++)
    {
        FUN0(data, data);
    }
}
void FUN2(char * data, ...)
{
    {
        char dest[100] = "";
        va_list args;
        va_start(args, data);
        vsnprintf(dest, 100-1, data, args);
        va_end(args);
        printLine(dest);
    }
}
void FUN3()
{
    int h,j;
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    for(h = 0; h < 1; h++)
    {
        strcpy(data, "fixedstringtest");
    }
    for(j = 0; j < 1; j++)
    {
        FUN2(data, data);
    }
}
