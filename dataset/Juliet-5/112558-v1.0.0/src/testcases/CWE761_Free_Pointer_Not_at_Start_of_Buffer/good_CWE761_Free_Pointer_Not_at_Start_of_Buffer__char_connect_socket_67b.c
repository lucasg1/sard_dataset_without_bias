typedef struct _CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_connect_socket_67_structType
{
    char * structFirst;
} CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_connect_socket_67_structType;
void FUN0(CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_connect_socket_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_connect_socket_67_structType myStruct;
    data = (char *)malloc(100*sizeof(char));
    data[0] = '\0';
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
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_connect_socket_67_structType
{
    char * structFirst;
} CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_connect_socket_67_structType;
void FUN0(CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_connect_socket_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    {
        size_t i;
        for (i=0; i < strlen(data); i++)
        {
            if (data[i] == SEARCH_CHAR)
            {
                printLine("We have a match!");
                break;
            }
        }
        free(data);
    }
}
