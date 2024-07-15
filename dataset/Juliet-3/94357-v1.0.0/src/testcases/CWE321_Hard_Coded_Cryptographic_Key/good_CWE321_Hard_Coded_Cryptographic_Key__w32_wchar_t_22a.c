extern int VAR0;
extern int VAR1;
wchar_t * FUN0(wchar_t * cryptoKey)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            size_t cryptoKeyLen = wcslen(cryptoKey);
            if(100-cryptoKeyLen > 1)
            {
                if (fgetws(cryptoKey+cryptoKeyLen, (int)(100-cryptoKeyLen), stdin) == NULL)
                {
                    printLine("fgetws() failed");
                    cryptoKey[cryptoKeyLen] = L'\0';
                }
                cryptoKeyLen = wcslen(cryptoKey);
                if (cryptoKeyLen > 0)
                {
                    cryptoKey[cryptoKeyLen-1] = L'\0';
                }
            }
        }
    }
    return cryptoKey;
}
wchar_t * FUN1(wchar_t * cryptoKey)
{
    if(VAR1)
    {
        {
            size_t cryptoKeyLen = wcslen(cryptoKey);
            if(100-cryptoKeyLen > 1)
            {
                if (fgetws(cryptoKey+cryptoKeyLen, (int)(100-cryptoKeyLen), stdin) == NULL)
                {
                    printLine("fgetws() failed");
                    cryptoKey[cryptoKeyLen] = L'\0';
                }
                cryptoKeyLen = wcslen(cryptoKey);
                if (cryptoKeyLen > 0)
                {
                    cryptoKey[cryptoKeyLen-1] = L'\0';
                }
            }
        }
    }
    return cryptoKey;
}
int VAR0 = 0;
int VAR1 = 0;
wchar_t * FUN0(wchar_t * cryptoKey);
void FUN3()
{
    wchar_t * cryptoKey;
    wchar_t cryptoKeyBuffer[100] = L"";
    cryptoKey = cryptoKeyBuffer;
    VAR0 = 0; 
    cryptoKey = FUN0(cryptoKey);
    {
        HCRYPTPROV hCryptProv;
        HCRYPTKEY hKey;
        HCRYPTHASH hHash;
        wchar_t toBeEncrypted[] = L"String to be encrypted";
        DWORD encryptedLen = wcslen(toBeEncrypted)*sizeof(wchar_t);
        BYTE encrypted[200];    
        memcpy(encrypted, toBeEncrypted, encryptedLen);
        if(!CryptAcquireContext(&hCryptProv, NULL, MS_ENHANCED_PROV, PROV_RSA_AES, 0))
        {
            if(!CryptAcquireContext(&hCryptProv, NULL, MS_ENHANCED_PROV, PROV_RSA_AES, CRYPT_NEWKEYSET))
            {
                printLine("Error in acquiring cryptographic context");
                exit(1);
            }
        }
        if(!CryptCreateHash(hCryptProv, CALG_SHA_256, 0, 0, &hHash))
        {
            printLine("Error in creating hash");
            exit(1);
        }
        if(!CryptHashData(hHash, (BYTE *) cryptoKey, wcslen(cryptoKey)*sizeof(wchar_t), 0))
        {
            printLine("Error in hashing cryptoKey");
            exit(1);
        }
        if(!CryptDeriveKey(hCryptProv, CALG_AES_256, hHash, 0, &hKey))
        {
            printLine("Error in CryptDeriveKey");
            exit(1);
        }
        if(!CryptEncrypt(hKey, (HCRYPTHASH)NULL, 1, 0, encrypted, &encryptedLen, sizeof(encrypted)))
        {
            printLine("Error in CryptEncrypt");
            exit(1);
        }
        printBytesLine(encrypted, encryptedLen);
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
}
wchar_t * FUN1(wchar_t * cryptoKey);
void FUN5()
{
    wchar_t * cryptoKey;
    wchar_t cryptoKeyBuffer[100] = L"";
    cryptoKey = cryptoKeyBuffer;
    VAR1 = 1; 
    cryptoKey = FUN1(cryptoKey);
    {
        HCRYPTPROV hCryptProv;
        HCRYPTKEY hKey;
        HCRYPTHASH hHash;
        wchar_t toBeEncrypted[] = L"String to be encrypted";
        DWORD encryptedLen = wcslen(toBeEncrypted)*sizeof(wchar_t);
        BYTE encrypted[200];    
        memcpy(encrypted, toBeEncrypted, encryptedLen);
        if(!CryptAcquireContext(&hCryptProv, NULL, MS_ENHANCED_PROV, PROV_RSA_AES, 0))
        {
            if(!CryptAcquireContext(&hCryptProv, NULL, MS_ENHANCED_PROV, PROV_RSA_AES, CRYPT_NEWKEYSET))
            {
                printLine("Error in acquiring cryptographic context");
                exit(1);
            }
        }
        if(!CryptCreateHash(hCryptProv, CALG_SHA_256, 0, 0, &hHash))
        {
            printLine("Error in creating hash");
            exit(1);
        }
        if(!CryptHashData(hHash, (BYTE *) cryptoKey, wcslen(cryptoKey)*sizeof(wchar_t), 0))
        {
            printLine("Error in hashing cryptoKey");
            exit(1);
        }
        if(!CryptDeriveKey(hCryptProv, CALG_AES_256, hHash, 0, &hKey))
        {
            printLine("Error in CryptDeriveKey");
            exit(1);
        }
        if(!CryptEncrypt(hKey, (HCRYPTHASH)NULL, 1, 0, encrypted, &encryptedLen, sizeof(encrypted)))
        {
            printLine("Error in CryptEncrypt");
            exit(1);
        }
        printBytesLine(encrypted, encryptedLen);
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
}
