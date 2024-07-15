typedef struct _CWE191_Integer_Underflow__int_listen_socket_sub_67_structType
{
    int structFirst;
} CWE191_Integer_Underflow__int_listen_socket_sub_67_structType;
void FUN0(CWE191_Integer_Underflow__int_listen_socket_sub_67_structType myStruct);
void FUN1()
{
    int data;
    CWE191_Integer_Underflow__int_listen_socket_sub_67_structType myStruct;
    data = 0;
    data = -2;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE191_Integer_Underflow__int_listen_socket_sub_67_structType myStruct);
void FUN3()
{
    int data;
    CWE191_Integer_Underflow__int_listen_socket_sub_67_structType myStruct;
    data = 0;
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
            data = atoi(inputBuffer);
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
    myStruct.structFirst = data;
    FUN2(myStruct);
}
typedef struct _CWE191_Integer_Underflow__int_listen_socket_sub_67_structType
{
    int structFirst;
} CWE191_Integer_Underflow__int_listen_socket_sub_67_structType;
void FUN0(CWE191_Integer_Underflow__int_listen_socket_sub_67_structType myStruct)
{
    int data = myStruct.structFirst;
    {
        int result = data - 1;
        printIntLine(result);
    }
}
void FUN2(CWE191_Integer_Underflow__int_listen_socket_sub_67_structType myStruct)
{
    int data = myStruct.structFirst;
    if (data > INT_MIN)
    {
        int result = data - 1;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform subtraction.");
    }
}
