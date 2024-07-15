using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, wchar_t *> dataMap);
void FUN1()
{
    wchar_t * data;
    map<int, wchar_t *> dataMap;
    wchar_t dataBuffer[100] = L"";
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
            if (fgetws(data, 100, pFile) == NULL)
            {
                data[0] = L'\0';
            }
            fclose(pFile);
        }
        else
        {
            data[0] = L'\0';
        }
        do
        {
            BYTE payload[(100 - 1) * sizeof(wchar_t)]; 
            DWORD payloadBytes;
            payloadBytes = decodeHexWChars(payload, sizeof(payload), data);
            SecureZeroMemory(data, 100 * sizeof(wchar_t));
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
            data[payloadBytes / sizeof(wchar_t)] = L'\0';
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
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
void FUN2(map<int, wchar_t *> dataMap);
void FUN3()
{
    wchar_t * data;
    map<int, wchar_t *> dataMap;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    {
        FILE *pFile;
        pFile = fopen("passwords.txt", "r");
        if (pFile != NULL)
        {
            if (fgetws(data, 100, pFile) == NULL)
            {
                data[0] = L'\0';
            }
            fclose(pFile);
        }
        else
        {
            data[0] = L'\0';
        }
    }
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN2(dataMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, wchar_t *> dataMap)
{
    wchar_t * data = dataMap[2];
    {
        HANDLE pHandle;
        wchar_t * username = L"User";
        wchar_t * domain = L"Domain";
        if (LogonUserW(
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
void FUN2(map<int, wchar_t *> dataMap)
{
    wchar_t * data = dataMap[2];
    {
        HANDLE pHandle;
        wchar_t * username = L"User";
        wchar_t * domain = L"Domain";
        char hashData[100] = HASH_INPUT;
        HCRYPTPROV hCryptProv = 0;
        HCRYPTHASH hHash = 0;
        HCRYPTKEY hKey = 0;
        do
        {
            BYTE payload[(100 - 1) * sizeof(wchar_t)]; 
            DWORD payloadBytes;
            payloadBytes = decodeHexWChars(payload, sizeof(payload), data);
            SecureZeroMemory(data, 100 * sizeof(wchar_t));
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
            data[payloadBytes / sizeof(wchar_t)] = L'\0';
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
