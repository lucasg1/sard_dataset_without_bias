void FUN0()
{
    while(1)
    {
        {
            BYTE payload[100];
            DWORD payloadLen = strlen(PAYLOAD);
            HCRYPTPROV hCryptProv = (HCRYPTPROV)NULL;
            HCRYPTHASH hHash = (HCRYPTHASH)NULL;
            HCRYPTKEY hKey = (HCRYPTKEY)NULL;
            char hashData[100] = HASH_INPUT;
            do
            {
                memcpy(payload, PAYLOAD, payloadLen);
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
<START>
<END>
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
            printBytesLine(payload, payloadLen);
        }
        break;
    }
}
