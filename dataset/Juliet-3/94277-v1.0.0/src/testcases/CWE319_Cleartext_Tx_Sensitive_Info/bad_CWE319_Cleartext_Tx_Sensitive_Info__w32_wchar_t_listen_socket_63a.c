void FUN0(wchar_t * * passwordPtr)
{
    wchar_t * password = *passwordPtr;
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
void FUN0(wchar_t * * passwordPtr);
void FUN2()
{
    wchar_t * password;
    wchar_t passwordBuffer[100] = L"";
    password = passwordBuffer;
    {
        WSADATA wsaData;
        int wsaDataInit = 0;
        int recvResult;
        struct sockaddr_in service;
        wchar_t *replace;
        SOCKET listenSocket = INVALID_SOCKET;
        SOCKET acceptSocket = INVALID_SOCKET;
        size_t passwordLen = wcslen(password);
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
<START>
            recvResult = recv(acceptSocket, (char*)(password + passwordLen), (100 - passwordLen - 1) * sizeof(wchar_t), 0);
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
        if (listenSocket != INVALID_SOCKET)
        {
            closesocket(listenSocket);
        }
        if (acceptSocket != INVALID_SOCKET)
        {
            closesocket(acceptSocket);
        }
        if (wsaDataInit)
        {
            WSACleanup();
        }
    }
    FUN0(&password);
}
