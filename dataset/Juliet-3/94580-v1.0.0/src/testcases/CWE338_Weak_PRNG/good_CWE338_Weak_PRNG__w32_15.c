void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
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
    break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
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
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
