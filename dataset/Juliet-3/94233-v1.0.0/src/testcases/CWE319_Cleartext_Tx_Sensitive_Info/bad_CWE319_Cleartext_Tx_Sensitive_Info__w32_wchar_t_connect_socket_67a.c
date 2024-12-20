typedef struct _CWE319_Cleartext_Tx_Sensitive_Info__w32_wchar_t_connect_socket_67_structType
{
    wchar_t * structFirst;
} CWE319_Cleartext_Tx_Sensitive_Info__w32_wchar_t_connect_socket_67_structType;
void FUN0(CWE319_Cleartext_Tx_Sensitive_Info__w32_wchar_t_connect_socket_67_structType myStruct)
{
    wchar_t * password = myStruct.structFirst;
    {
        HANDLE pHandle;
        wchar_t * username = L"User";
        wchar_t * domain = L"Domain";
        if (LogonUserW(
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
typedef struct _CWE319_Cleartext_Tx_Sensitive_Info__w32_wchar_t_connect_socket_67_structType
{
    wchar_t * structFirst;
} CWE319_Cleartext_Tx_Sensitive_Info__w32_wchar_t_connect_socket_67_structType;
void FUN0(CWE319_Cleartext_Tx_Sensitive_Info__w32_wchar_t_connect_socket_67_structType myStruct);
void FUN2()
{
    wchar_t * password;
    CWE319_Cleartext_Tx_Sensitive_Info__w32_wchar_t_connect_socket_67_structType myStruct;
    wchar_t passwordBuffer[100] = L"";
    password = passwordBuffer;
    {
        WSADATA wsaData;
        int wsaDataInit = 0;
        int recvResult;
        struct sockaddr_in service;
        wchar_t *replace;
        SOCKET connectSocket = INVALID_SOCKET;
        size_t passwordLen = wcslen(password);
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
            recvResult = recv(connectSocket, (char*)(password + passwordLen), (100 - passwordLen - 1) * sizeof(wchar_t), 0);
<END>
            if (recvResult == SOCKET_ERROR || recvResult == 0)
            {
                break;
            }
            password[passwordLen + recvResult / sizeof(wchar_t)] = L'\0';
            replace = wcschr(password, L'\r');
            if (replace)
            {
                *replace = L'\0';
            }
            replace = wcschr(password, L'\n');
            if (replace)
            {
                *replace = L'\0';
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
