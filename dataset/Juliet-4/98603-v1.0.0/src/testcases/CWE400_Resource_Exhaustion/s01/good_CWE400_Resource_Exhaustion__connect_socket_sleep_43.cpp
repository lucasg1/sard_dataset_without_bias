namespace NAMESPACE0
{
void FUN0(int &count)
{
    count = 20;
}
void FUN1()
{
    int count;
    count = -1;
    FUN0(count);
    SLEEP(count);
    printLine("Sleep time possibly too long");
}
void FUN2(int &count)
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
            count = atoi(inputBuffer);
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
void FUN3()
{
    int count;
    count = -1;
    FUN2(count);
    if (count > 0 && count <= 2000)
    {
        SLEEP(count);
        printLine("Sleep time OK");
    }
    else
    {
        printLine("Sleep time too long");
    }
}
} 
