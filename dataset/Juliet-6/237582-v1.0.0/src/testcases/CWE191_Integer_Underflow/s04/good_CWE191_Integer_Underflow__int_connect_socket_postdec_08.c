static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    int data;
    data = 0;
    if(FUN0())
    {
        {
            WSADATA wsaData;
            int wsaDataInit = 0;
            int recvResult;
            struct sockaddr_in service;
            SOCKET connectSocket = INVALID_SOCKET;
            char inputBuffer[CHAR_ARRAY_SIZE];
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
                recvResult = recv(connectSocket, inputBuffer, CHAR_ARRAY_SIZE - 1, 0);
                if (recvResult == SOCKET_ERROR || recvResult == 0)
                {
                    break;
                }
                inputBuffer[recvResult] = '\0';
                data = atoi(inputBuffer);
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
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (data > INT_MIN)
        {
            data--;
            int result = data;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
void FUN3()
{
    int data;
    data = 0;
    if(FUN0())
    {
        {
            WSADATA wsaData;
            int wsaDataInit = 0;
            int recvResult;
            struct sockaddr_in service;
            SOCKET connectSocket = INVALID_SOCKET;
            char inputBuffer[CHAR_ARRAY_SIZE];
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
                recvResult = recv(connectSocket, inputBuffer, CHAR_ARRAY_SIZE - 1, 0);
                if (recvResult == SOCKET_ERROR || recvResult == 0)
                {
                    break;
                }
                inputBuffer[recvResult] = '\0';
                data = atoi(inputBuffer);
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
    if(FUN0())
    {
        if (data > INT_MIN)
        {
            data--;
            int result = data;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
void FUN4()
{
    int data;
    data = 0;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = -2;
    }
    if(FUN0())
    {
        {
            data--;
            int result = data;
            printIntLine(result);
        }
    }
}
void FUN5()
{
    int data;
    data = 0;
    if(FUN0())
    {
        data = -2;
    }
    if(FUN0())
    {
        {
            data--;
            int result = data;
            printIntLine(result);
        }
    }
}
