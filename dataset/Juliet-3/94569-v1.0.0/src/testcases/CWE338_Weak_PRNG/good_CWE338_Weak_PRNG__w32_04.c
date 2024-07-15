static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            HCRYPTPROV hCryptProv;
            int data;
            if (!CryptAcquireContextW(&hCryptProv, 0, 0, PROV_RSA_FULL, 0))
            {
                exit(1);
            }
            if (!CryptGenRandom(hCryptProv, sizeof(data), (BYTE *) &data))
            {
                CryptReleaseContext(hCryptProv, 0);
                exit(1);
            }
            if (hCryptProv)
            {
                CryptReleaseContext(hCryptProv, 0);
            }
            printIntLine(data);
        }
    }
}
void FUN1()
{
    if(STATIC_CONST_TRUE)
    {
        {
            HCRYPTPROV hCryptProv;
            int data;
            if (!CryptAcquireContextW(&hCryptProv, 0, 0, PROV_RSA_FULL, 0))
            {
                exit(1);
            }
            if (!CryptGenRandom(hCryptProv, sizeof(data), (BYTE *) &data))
            {
                CryptReleaseContext(hCryptProv, 0);
                exit(1);
            }
            if (hCryptProv)
            {
                CryptReleaseContext(hCryptProv, 0);
            }
            printIntLine(data);
        }
    }
}
