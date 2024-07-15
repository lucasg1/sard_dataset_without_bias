typedef struct _CWE319_Cleartext_Tx_Sensitive_Info__w32_char_connect_socket_67_structType
{
    char * structFirst;
} CWE319_Cleartext_Tx_Sensitive_Info__w32_char_connect_socket_67_structType;
void FUN0(CWE319_Cleartext_Tx_Sensitive_Info__w32_char_connect_socket_67_structType myStruct)
{
    char * password = myStruct.structFirst;
    {
        HANDLE pHandle;
        char * username = "User";
        char * domain = "Domain";
        if (LogonUserA(
                    username,
                    domain,
                    password,
                    LOGON32_LOGON_NETWORK,
                    LOGON32_PROVIDER_DEFAULT,
                    &pHandle) != 0)
        {
            printLine("User logged in successfully.");
            CloseHandle(pHandle);
        }
        else
        {
            printLine("Unable to login.");
        }
    }
}
typedef struct _CWE319_Cleartext_Tx_Sensitive_Info__w32_char_connect_socket_67_structType
{
    char * structFirst;
} CWE319_Cleartext_Tx_Sensitive_Info__w32_char_connect_socket_67_structType;
void FUN0(CWE319_Cleartext_Tx_Sensitive_Info__w32_char_connect_socket_67_structType myStruct);
void FUN2()
{
    char * password;
    CWE319_Cleartext_Tx_Sensitive_Info__w32_char_connect_socket_67_structType myStruct;
    char passwordBuffer[100] = "";
    password = passwordBuffer;
    {
        WSADATA wsaData;
        int wsaDataInit = 0;
        int recvResult;
        struct sockaddr_in service;
        char *replace;
        SOCKET connectSocket = INVALID_SOCKET;
        size_t passwordLen = strlen(password);
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
<START>
            recvResult = recv(connectSocket, (char*)(password + passwordLen), (100 - passwordLen - 1) * sizeof(char), 0);
<END>
            if (recvResult == SOCKET_ERROR || recvResult == 0)
            {
                break;
            }
            password[passwordLen + recvResult / sizeof(char)] = '\0';
            replace = strchr(password, '\r');
            if (replace)
            {
                *replace = '\0';
            }
            replace = strchr(password, '\n');
            if (replace)
            {
                *replace = '\0';
            }
        }
        while (0);
        if (connectSocket != INVALID_SOCKET)
        {
            closesocket(connectSocket);
        }
        if (wsaDataInit)
        {
            WSACleanup();
        }
    }
    myStruct.structFirst = password;
    FUN0(myStruct);
}
