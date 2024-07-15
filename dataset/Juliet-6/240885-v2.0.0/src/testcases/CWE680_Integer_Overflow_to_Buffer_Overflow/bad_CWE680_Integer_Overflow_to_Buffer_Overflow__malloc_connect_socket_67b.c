typedef struct _CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_connect_socket_67_structType
{
    int structFirst;
} CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_connect_socket_67_structType;
void FUN0(CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_connect_socket_67_structType myStruct);
void FUN1()
{
    int data;
    CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_connect_socket_67_structType myStruct;
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
    FUN0(myStruct);
}
typedef struct _CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_connect_socket_67_structType
{
    int structFirst;
} CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_connect_socket_67_structType;
void FUN0(CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_connect_socket_67_structType myStruct)
{
    int data = myStruct.structFirst;
    {
        size_t i;
        int *intPointer;
        intPointer = (int*)malloc(data * sizeof(int));
        if (intPointer == NULL) {exit(-1);}
        for (i = 0; i < (size_t)data; i++)
        {
<START>
            intPointer[i] = 0; 
<END>
        }
        printIntLine(intPointer[0]);
        free(intPointer);
    }
}
