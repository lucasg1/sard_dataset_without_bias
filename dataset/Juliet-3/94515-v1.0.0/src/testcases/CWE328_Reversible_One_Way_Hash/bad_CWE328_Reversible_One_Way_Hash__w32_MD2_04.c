static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    if(STATIC_CONST_TRUE)
    {
        {
            HCRYPTPROV hCryptProv;
            HCRYPTHASH hHash;
            FILE *pFile = NULL;
            char password[PASSWORD_INPUT_SIZE];
            UCHAR savedHash[MD2_SUM_SIZE], calcHash[MD2_SUM_SIZE];
            DWORD hashSize;
            char *replace;
            size_t i;
            pFile = fopen("password.txt", "r");
            if (pFile == NULL)
            {
                exit(1);
            }
            for (i = 0; i < MD2_SUM_SIZE; i++)
            {
                ULONG val;
                if (fscanf(pFile, "%02x", &val) != 1)
                {
                    fclose(pFile);
                    exit(1);
                }
                if (val > 0xff) 
                {
                    fclose(pFile);
                    exit(1);
                }
                savedHash[i] = (UCHAR)val;
            }
            if (pFile)
            {
                fclose(pFile);
            }
            if (fgets(password, PASSWORD_INPUT_SIZE, stdin) == NULL)
            {
                exit(1);
            }
            replace = strchr(password, '\r');
            if (replace)
            {
                *replace = '\0';
            }
            replace = strchr(password, '\n');
            if (replace)
            {
                *replace = '\0';
            }
            if (!CryptAcquireContextW(&hCryptProv, 0, 0, PROV_RSA_FULL, 0))
            {
                exit(1);
            }
<START>
            if (!CryptCreateHash(hCryptProv, CALG_MD2, 0, 0, &hHash))
<END>
            {
                CryptReleaseContext(hCryptProv, 0);
                exit(1);
            }
            if (!CryptHashData(hHash, (BYTE*)password, strlen(password), 0))
            {
                CryptDestroyHash(hHash);
                CryptReleaseContext(hCryptProv, 0);
                exit(1);
            }
            hashSize = MD2_SUM_SIZE;
            if (!CryptGetHashParam(hHash, HP_HASHVAL, (BYTE*)calcHash, &hashSize, 0))
            {
                CryptDestroyHash(hHash);
                CryptReleaseContext(hCryptProv, 0);
                exit(1);
            }
            if (memcmp(savedHash, calcHash, MD2_SUM_SIZE * sizeof(UCHAR)) == 0)
            {
                printLine("Access granted");
            }
            else
            {
                printLine("Access denied");
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
}
