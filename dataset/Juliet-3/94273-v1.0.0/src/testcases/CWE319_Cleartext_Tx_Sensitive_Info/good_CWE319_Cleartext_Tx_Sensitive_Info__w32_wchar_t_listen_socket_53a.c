void FUN0(wchar_t * password);
void FUN1(wchar_t * password)
{
    FUN0(password);
}
void FUN2(wchar_t * password);
void FUN3(wchar_t * password)
{
    FUN2(password);
}
void FUN1(wchar_t * password);
void FUN5(wchar_t * password)
{
    FUN1(password);
}
void FUN3(wchar_t * password);
void FUN7(wchar_t * password)
{
    FUN3(password);
}
void FUN0(wchar_t * password)
{
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
void FUN2(wchar_t * password)
{
    {
        HCRYPTPROV hCryptProv = 0;
        HCRYPTHASH hHash = 0;
        HCRYPTKEY hKey = 0;
        char hashData[100] = HASH_INPUT;
        HANDLE pHandle;
        wchar_t * username = L"User";
        wchar_t * domain = L"Domain";
        do
        {
            BYTE payload[(100 - 1) * sizeof(wchar_t)]; 
            DWORD payloadBytes;
            payloadBytes = decodeHexWChars(payload, sizeof(payload), password);
            SecureZeroMemory(password, 100 * sizeof(wchar_t));
            if(!CryptAcquireContext(&hCryptProv, NULL, MS_ENH_RSA_AES_PROV, PROV_RSA_AES, 0))
            {
                break;
            }
            if(!CryptCreateHash(hCryptProv, CALG_SHA_256, 0, 0, &hHash))
            {
                break;
            }
            if(!CryptHashData(hHash, (BYTE*)hashData, strlen(hashData), 0))
            {
                break;
            }
            if(!CryptDeriveKey(hCryptProv, CALG_AES_256, hHash, 0, &hKey))
            {
                break;
            }
            if(!CryptDecrypt(hKey, 0, 1, 0, payload, &payloadBytes))
            {
                break;
            }
            memcpy(password, payload, payloadBytes);
            password[payloadBytes / sizeof(wchar_t)] = L'\0';
        }
        while (0);
        if (hKey)
        {
            CryptDestroyKey(hKey);
        }
        if (hHash)
        {
            CryptDestroyHash(hHash);
        }
        if (hCryptProv)
        {
            CryptReleaseContext(hCryptProv, 0);
        }
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
void FUN5(wchar_t * password);
void FUN11()
{
    wchar_t * password;
    wchar_t passwordBuffer[100] = L"";
    password = passwordBuffer;
    wcscpy(password, L"Password1234!");
    FUN5(password);
}
void FUN7(wchar_t * password);
void FUN13()
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
            recvResult = recv(acceptSocket, (char*)(password + passwordLen), (100 - passwordLen - 1) * sizeof(wchar_t), 0);
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
    FUN7(password);
}
