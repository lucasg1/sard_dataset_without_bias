void FUN0()
{
    char * password;
    char passwordBuffer[100] = "";
    password = passwordBuffer;
    if(globalReturnsTrueOrFalse())
    {
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
                recvResult = recv(connectSocket, (char*)(password + passwordLen), (100 - passwordLen - 1) * sizeof(char), 0);
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
    }
    else
    {
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
                recvResult = recv(connectSocket, (char*)(password + passwordLen), (100 - passwordLen - 1) * sizeof(char), 0);
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
    }
    if(globalReturnsTrueOrFalse())
    {
        {
            HCRYPTPROV hCryptProv = 0;
            HCRYPTHASH hHash = 0;
            HCRYPTKEY hKey = 0;
            char hashData[100] = HASH_INPUT;
            HANDLE pHandle;
            char * username = "User";
            char * domain = "Domain";
            do
            {
                BYTE payload[(100 - 1) * sizeof(char)]; 
                DWORD payloadBytes;
                payloadBytes = decodeHexChars(payload, sizeof(payload), password);
                SecureZeroMemory(password, 100 * sizeof(char));
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
                password[payloadBytes / sizeof(char)] = '\0';
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
    else
    {
        {
            HCRYPTPROV hCryptProv = 0;
            HCRYPTHASH hHash = 0;
            HCRYPTKEY hKey = 0;
            char hashData[100] = HASH_INPUT;
            HANDLE pHandle;
            char * username = "User";
            char * domain = "Domain";
            do
            {
                BYTE payload[(100 - 1) * sizeof(char)]; 
                DWORD payloadBytes;
                payloadBytes = decodeHexChars(payload, sizeof(payload), password);
                SecureZeroMemory(password, 100 * sizeof(char));
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
                password[payloadBytes / sizeof(char)] = '\0';
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
}
void FUN1()
{
    char * password;
    char passwordBuffer[100] = "";
    password = passwordBuffer;
    if(globalReturnsTrueOrFalse())
    {
        strcpy(password, "Password1234!");
    }
    else
    {
        strcpy(password, "Password1234!");
    }
    if(globalReturnsTrueOrFalse())
    {
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
    else
    {
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
}
