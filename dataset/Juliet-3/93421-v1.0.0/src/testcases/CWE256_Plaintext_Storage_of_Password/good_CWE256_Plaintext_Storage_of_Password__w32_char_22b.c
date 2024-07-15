int VAR0 = 0;
int VAR1 = 0;
int VAR2 = 0;
void FUN0(char * data);
void FUN1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    {
        FILE *pFile;
        pFile = fopen("passwords.txt", "r");
        if (pFile != NULL)
        {
            if (fgets(data, 100, pFile) == NULL)
            {
                data[0] = '\0';
            }
            fclose(pFile);
        }
        else
        {
            data[0] = '\0';
        }
    }
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(char * data);
void FUN3()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    {
        FILE *pFile;
        pFile = fopen("passwords.txt", "r");
        if (pFile != NULL)
        {
            if (fgets(data, 100, pFile) == NULL)
            {
                data[0] = '\0';
            }
            fclose(pFile);
        }
        else
        {
            data[0] = '\0';
        }
    }
    VAR1 = 1; 
    FUN2(data);
}
void FUN4(char * data);
void FUN5()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    {
        FILE *pFile;
        HCRYPTPROV hCryptProv = 0;
        HCRYPTHASH hHash = 0;
        HCRYPTKEY hKey = 0;
        char hashData[100] = HASH_INPUT;
        pFile = fopen("passwords.txt", "r");
        if (pFile != NULL)
        {
            if (fgets(data, 100, pFile) == NULL)
            {
                data[0] = '\0';
            }
            fclose(pFile);
        }
        else
        {
            data[0] = '\0';
        }
        do
        {
            BYTE payload[(100 - 1) * sizeof(char)]; 
            DWORD payloadBytes;
            payloadBytes = decodeHexChars(payload, sizeof(payload), data);
            SecureZeroMemory(data, 100 * sizeof(char));
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
            memcpy(data, payload, payloadBytes);
            data[payloadBytes / sizeof(char)] = '\0';
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
    }
    VAR2 = 1; 
    FUN4(data);
}
extern int VAR0;
extern int VAR1;
extern int VAR2;
void FUN0(char * data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            HANDLE pHandle;
            char * username = "User";
            char * domain = "Domain";
            char hashData[100] = HASH_INPUT;
            HCRYPTPROV hCryptProv = 0;
            HCRYPTHASH hHash = 0;
            HCRYPTKEY hKey = 0;
            do
            {
                BYTE payload[(100 - 1) * sizeof(char)]; 
                DWORD payloadBytes;
                payloadBytes = decodeHexChars(payload, sizeof(payload), data);
                SecureZeroMemory(data, 100 * sizeof(char));
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
                memcpy(data, payload, payloadBytes);
                data[payloadBytes / sizeof(char)] = '\0';
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
                        data,
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
void FUN2(char * data)
{
    if(VAR1)
    {
        {
            HANDLE pHandle;
            char * username = "User";
            char * domain = "Domain";
            char hashData[100] = HASH_INPUT;
            HCRYPTPROV hCryptProv = 0;
            HCRYPTHASH hHash = 0;
            HCRYPTKEY hKey = 0;
            do
            {
                BYTE payload[(100 - 1) * sizeof(char)]; 
                DWORD payloadBytes;
                payloadBytes = decodeHexChars(payload, sizeof(payload), data);
                SecureZeroMemory(data, 100 * sizeof(char));
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
                memcpy(data, payload, payloadBytes);
                data[payloadBytes / sizeof(char)] = '\0';
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
                        data,
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
void FUN4(char * data)
{
    if(VAR2)
    {
        {
            HANDLE pHandle;
            char * username = "User";
            char * domain = "Domain";
            if (LogonUserA(
                        username,
                        domain,
                        data,
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
