static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            BYTE payload[200];
            DWORD payloadLen = strlen(PAYLOAD);
            HCRYPTPROV hCryptProv = (HCRYPTPROV)NULL;
            HCRYPTHASH hHash = (HCRYPTHASH)NULL;
            HCRYPTKEY hKey = (HCRYPTKEY)NULL;
            do
            {
                memcpy(payload, PAYLOAD, payloadLen);
                if(!CryptAcquireContext(&hCryptProv, NULL, MS_ENHANCED_PROV, PROV_RSA_FULL, 0))
                {
                    if(!CryptAcquireContext(&hCryptProv, NULL, MS_ENHANCED_PROV, PROV_RSA_FULL, CRYPT_NEWKEYSET))
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
                if(!CryptHashData(hHash, (BYTE *) HASH_INPUT, strlen(HASH_INPUT)*sizeof(char), 0))
                {
                    printLine("Error in hashing HASH_INPUT");
                    exit(1);
                }
                if(!CryptDeriveKey(hCryptProv, CALG_RSA_SIGN, hHash, 0, &hKey))
                {
                    printLine("Error in CryptDeriveKey");
                    exit(1);
                }
                if(!CryptEncrypt(hKey, (HCRYPTHASH)NULL, 1, CRYPT_OAEP, (BYTE *)payload, &payloadLen, sizeof(payload)))
                {
                    printLine("Error in CryptEncryptData");
                    exit(1);
                }
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
            printBytesLine((BYTE *) payload, payloadLen);
        }
    }
}
void FUN3()
{
    if(FUN0())
    {
        {
            BYTE payload[200];
            DWORD payloadLen = strlen(PAYLOAD);
            HCRYPTPROV hCryptProv = (HCRYPTPROV)NULL;
            HCRYPTHASH hHash = (HCRYPTHASH)NULL;
            HCRYPTKEY hKey = (HCRYPTKEY)NULL;
            do
            {
                memcpy(payload, PAYLOAD, payloadLen);
                if(!CryptAcquireContext(&hCryptProv, NULL, MS_ENHANCED_PROV, PROV_RSA_FULL, 0))
                {
                    if(!CryptAcquireContext(&hCryptProv, NULL, MS_ENHANCED_PROV, PROV_RSA_FULL, CRYPT_NEWKEYSET))
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
                if(!CryptHashData(hHash, (BYTE *) HASH_INPUT, strlen(HASH_INPUT)*sizeof(char), 0))
                {
                    printLine("Error in hashing HASH_INPUT");
                    exit(1);
                }
                if(!CryptDeriveKey(hCryptProv, CALG_RSA_SIGN, hHash, 0, &hKey))
                {
                    printLine("Error in CryptDeriveKey");
                    exit(1);
                }
                if(!CryptEncrypt(hKey, (HCRYPTHASH)NULL, 1, CRYPT_OAEP, (BYTE *)payload, &payloadLen, sizeof(payload)))
                {
                    printLine("Error in CryptEncryptData");
                    exit(1);
                }
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
            printBytesLine((BYTE *) payload, payloadLen);
        }
    }
}
