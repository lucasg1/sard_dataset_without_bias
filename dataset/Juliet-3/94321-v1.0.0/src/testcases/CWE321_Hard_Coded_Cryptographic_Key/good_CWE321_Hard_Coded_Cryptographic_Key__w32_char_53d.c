void FUN0(char * cryptoKey);
void FUN1()
{
    char * cryptoKey;
    char cryptoKeyBuffer[100] = "";
    cryptoKey = cryptoKeyBuffer;
    {
        size_t cryptoKeyLen = strlen(cryptoKey);
        if(100-cryptoKeyLen > 1)
        {
            if (fgets(cryptoKey+cryptoKeyLen, (int)(100-cryptoKeyLen), stdin) == NULL)
            {
                printLine("fgets() failed");
                cryptoKey[cryptoKeyLen] = '\0';
            }
            cryptoKeyLen = strlen(cryptoKey);
            if (cryptoKeyLen > 0)
            {
                cryptoKey[cryptoKeyLen-1] = '\0';
            }
        }
    }
    FUN0(cryptoKey);
}
void FUN3(char * cryptoKey);
void FUN4(char * cryptoKey)
{
    FUN3(cryptoKey);
}
void FUN4(char * cryptoKey);
void FUN0(char * cryptoKey)
{
    FUN4(cryptoKey);
}
void FUN3(char * cryptoKey)
{
    {
        HCRYPTPROV hCryptProv;
        HCRYPTKEY hKey;
        HCRYPTHASH hHash;
        char toBeEncrypted[] = "String to be encrypted";
        DWORD encryptedLen = strlen(toBeEncrypted)*sizeof(char);
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
        if(!CryptHashData(hHash, (BYTE *) cryptoKey, strlen(cryptoKey)*sizeof(char), 0))
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
