void FUN0()
{
    goto sink;
sink:
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
