typedef struct _CWE400_Resource_Exhaustion__listen_socket_sleep_67_structType
{
    int structFirst;
} CWE400_Resource_Exhaustion__listen_socket_sleep_67_structType;
void FUN0(CWE400_Resource_Exhaustion__listen_socket_sleep_67_structType myStruct);
void FUN1()
{
    int count;
    CWE400_Resource_Exhaustion__listen_socket_sleep_67_structType myStruct;
    count = -1;
    count = 20;
    myStruct.structFirst = count;
    FUN0(myStruct);
}
void FUN2(CWE400_Resource_Exhaustion__listen_socket_sleep_67_structType myStruct);
void FUN3()
{
    int count;
    CWE400_Resource_Exhaustion__listen_socket_sleep_67_structType myStruct;
    count = -1;
    {
        WSADATA wsaData;
        int wsaDataInit = 0;
        int recvResult;
        struct sockaddr_in service;
        SOCKET listenSocket = INVALID_SOCKET;
        SOCKET acceptSocket = INVALID_SOCKET;
        char inputBuffer[CHAR_ARRAY_SIZE];
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
            recvResult = recv(acceptSocket, inputBuffer, CHAR_ARRAY_SIZE - 1, 0);
            if (recvResult == SOCKET_ERROR || recvResult == 0)
            {
                break;
            }
            inputBuffer[recvResult] = '\0';
            count = atoi(inputBuffer);
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
    myStruct.structFirst = count;
    FUN2(myStruct);
}
typedef struct _CWE400_Resource_Exhaustion__listen_socket_sleep_67_structType
{
    int structFirst;
} CWE400_Resource_Exhaustion__listen_socket_sleep_67_structType;
void FUN0(CWE400_Resource_Exhaustion__listen_socket_sleep_67_structType myStruct)
{
    int count = myStruct.structFirst;
    SLEEP(count);
    printLine("Sleep time possibly too long");
}
void FUN2(CWE400_Resource_Exhaustion__listen_socket_sleep_67_structType myStruct)
{
    int count = myStruct.structFirst;
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
