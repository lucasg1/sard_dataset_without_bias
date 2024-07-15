typedef struct _CWE369_Divide_by_Zero__int_connect_socket_divide_67_structType
{
    int structFirst;
} CWE369_Divide_by_Zero__int_connect_socket_divide_67_structType;
void FUN0(CWE369_Divide_by_Zero__int_connect_socket_divide_67_structType myStruct);
void FUN1()
{
    int data;
    CWE369_Divide_by_Zero__int_connect_socket_divide_67_structType myStruct;
    data = -1;
    data = 7;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE369_Divide_by_Zero__int_connect_socket_divide_67_structType myStruct);
void FUN3()
{
    int data;
    CWE369_Divide_by_Zero__int_connect_socket_divide_67_structType myStruct;
    data = -1;
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
    myStruct.structFirst = data;
    FUN2(myStruct);
}
typedef struct _CWE369_Divide_by_Zero__int_connect_socket_divide_67_structType
{
    int structFirst;
} CWE369_Divide_by_Zero__int_connect_socket_divide_67_structType;
void FUN0(CWE369_Divide_by_Zero__int_connect_socket_divide_67_structType myStruct)
{
    int data = myStruct.structFirst;
    printIntLine(100 / data);
}
void FUN2(CWE369_Divide_by_Zero__int_connect_socket_divide_67_structType myStruct)
{
    int data = myStruct.structFirst;
    if( data != 0 )
    {
        printIntLine(100 / data);
    }
    else
    {
        printLine("This would result in a divide by zero");
    }
}
