static int staticFive = 5;
void FUN0()
{
    wchar_t * cryptoKey;
    wchar_t cryptoKeyBuffer[100] = L"";
    cryptoKey = cryptoKeyBuffer;
    if(staticFive==5)
    {
        wcscpy(cryptoKey, CRYPTO_KEY);
    }
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
<START>
        if(!CryptEncrypt(hKey, (HCRYPTHASH)NULL, 1, 0, encrypted, &encryptedLen, sizeof(encrypted)))
<END>
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
