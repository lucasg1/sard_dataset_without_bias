typedef struct _CWE400_Resource_Exhaustion__connect_socket_sleep_67_structType
{
    int structFirst;
} CWE400_Resource_Exhaustion__connect_socket_sleep_67_structType;
void FUN0(CWE400_Resource_Exhaustion__connect_socket_sleep_67_structType myStruct);
void FUN1()
{
    int count;
    CWE400_Resource_Exhaustion__connect_socket_sleep_67_structType myStruct;
    count = -1;
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
    myStruct.structFirst = count;
    FUN0(myStruct);
}
typedef struct _CWE400_Resource_Exhaustion__connect_socket_sleep_67_structType
{
    int structFirst;
} CWE400_Resource_Exhaustion__connect_socket_sleep_67_structType;
void FUN0(CWE400_Resource_Exhaustion__connect_socket_sleep_67_structType myStruct)
{
    int count = myStruct.structFirst;
<START>
    SLEEP(count);
<END>
    printLine("Sleep time possibly too long");
}
