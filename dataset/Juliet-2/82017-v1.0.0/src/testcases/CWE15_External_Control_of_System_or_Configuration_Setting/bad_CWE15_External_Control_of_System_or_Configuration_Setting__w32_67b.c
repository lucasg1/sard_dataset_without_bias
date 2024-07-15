typedef struct _CWE15_External_Control_of_System_or_Configuration_Setting__w32_67_structType
{
    char * structFirst;
} CWE15_External_Control_of_System_or_Configuration_Setting__w32_67_structType;
void FUN0(CWE15_External_Control_of_System_or_Configuration_Setting__w32_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE15_External_Control_of_System_or_Configuration_Setting__w32_67_structType myStruct;
    char dataBuffer[100] = "";
    data = dataBuffer;
    {
        WSADATA wsaData;
        BOOL wsaDataInit = FALSE;
        SOCKET listenSocket = INVALID_SOCKET;
        SOCKET acceptSocket = INVALID_SOCKET;
        struct sockaddr_in service;
        int recvResult;
        do
        {
            if (WSAStartup(MAKEWORD(2,2), &wsaData) != NO_ERROR)
            {
                break;
            }
            wsaDataInit = 1;
            listenSocket = socket(PF_INET, SOCK_STREAM, 0);
            if (listenSocket == INVALID_SOCKET)
            {
                break;
            }
            memset(&service, 0, sizeof(service));
            service.sin_family = AF_INET;
            service.sin_addr.s_addr = INADDR_ANY;
            service.sin_port = htons(LISTEN_PORT);
            if (SOCKET_ERROR == bind(listenSocket, (struct sockaddr*)&service, sizeof(service)))
            {
                break;
            }
            if (SOCKET_ERROR == listen(listenSocket, LISTEN_BACKLOG))
            {
                break;
            }
            acceptSocket = accept(listenSocket, NULL, NULL);
            if (acceptSocket == INVALID_SOCKET)
            {
                break;
            }
            recvResult = recv(acceptSocket, data, 100 - 1, 0);
            if (recvResult == SOCKET_ERROR || recvResult == 0)
            {
                break;
            }
            data[recvResult] = '\0';
        }
        while (0);
        if (acceptSocket != INVALID_SOCKET)
        {
            closesocket(acceptSocket);
        }
        if (listenSocket != INVALID_SOCKET)
        {
            closesocket(listenSocket);
        }
        if (wsaDataInit)
        {
            WSACleanup();
        }
    }
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE15_External_Control_of_System_or_Configuration_Setting__w32_67_structType
{
    char * structFirst;
} CWE15_External_Control_of_System_or_Configuration_Setting__w32_67_structType;
void FUN0(CWE15_External_Control_of_System_or_Configuration_Setting__w32_67_structType myStruct)
{
    char * data = myStruct.structFirst;
<START>
    if (!SetComputerNameA(data))
<END>
    {
        printLine("Failure setting computer name");
        exit(1);
    }
}
