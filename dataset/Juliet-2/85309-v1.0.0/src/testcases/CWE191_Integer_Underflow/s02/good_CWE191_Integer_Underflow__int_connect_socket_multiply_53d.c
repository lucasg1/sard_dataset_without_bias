void FUN0(int data);
void FUN1()
{
    int data;
    data = 0;
    data = -2;
    FUN0(data);
}
void FUN2(int data);
void FUN3()
{
    int data;
    data = 0;
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
    FUN2(data);
}
void FUN5(int data);
void FUN0(int data)
{
    FUN5(data);
}
void FUN7(int data);
void FUN2(int data)
{
    FUN7(data);
}
void FUN9(int data);
void FUN5(int data)
{
    FUN9(data);
}
void FUN11(int data);
void FUN7(int data)
{
    FUN11(data);
}
void FUN9(int data)
{
    if(data < 0) 
    {
        int result = data * 2;
        printIntLine(result);
    }
}
void FUN11(int data)
{
    if(data < 0) 
    {
        if (data > (INT_MIN/2))
        {
            int result = data * 2;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too small to perform multiplication.");
        }
    }
}
