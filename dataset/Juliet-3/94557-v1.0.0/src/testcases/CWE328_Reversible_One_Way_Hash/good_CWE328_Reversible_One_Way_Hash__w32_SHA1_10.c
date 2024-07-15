void FUN0()
{
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            HCRYPTPROV hCryptProv;
            HCRYPTHASH hHash;
            FILE *pFile = NULL;
            char password[PASSWORD_INPUT_SIZE];
            UCHAR savedHash[SHA512_SUM_SIZE], calcHash[SHA512_SUM_SIZE];
            DWORD hashSize;
            char *replace;
            size_t i;
            pFile = fopen("password.txt", "r");
            if (pFile == NULL)
            {
                exit(1);
            }
            for (i = 0; i < SHA512_SUM_SIZE; i++)
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
            fclose(pFile);
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
            if (!CryptCreateHash(hCryptProv, CALG_SHA_512, 0, 0, &hHash))
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
            hashSize = SHA512_SUM_SIZE;
            if (!CryptGetHashParam(hHash, HP_HASHVAL, (BYTE*)calcHash, &hashSize, 0))
            {
                CryptDestroyHash(hHash);
                CryptReleaseContext(hCryptProv, 0);
                exit(1);
            }
            if (memcmp(savedHash, calcHash, SHA512_SUM_SIZE * sizeof(UCHAR)) == 0)
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
void FUN1()
{
    if(globalTrue)
    {
        {
            HCRYPTPROV hCryptProv;
            HCRYPTHASH hHash;
            FILE *pFile = NULL;
            char password[PASSWORD_INPUT_SIZE];
            UCHAR savedHash[SHA512_SUM_SIZE], calcHash[SHA512_SUM_SIZE];
            DWORD hashSize;
            char *replace;
            size_t i;
            pFile = fopen("password.txt", "r");
            if (pFile == NULL)
            {
                exit(1);
            }
            for (i = 0; i < SHA512_SUM_SIZE; i++)
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
            fclose(pFile);
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
            if (!CryptCreateHash(hCryptProv, CALG_SHA_512, 0, 0, &hHash))
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
            hashSize = SHA512_SUM_SIZE;
            if (!CryptGetHashParam(hHash, HP_HASHVAL, (BYTE*)calcHash, &hashSize, 0))
            {
                CryptDestroyHash(hHash);
                CryptReleaseContext(hCryptProv, 0);
                exit(1);
            }
            if (memcmp(savedHash, calcHash, SHA512_SUM_SIZE * sizeof(UCHAR)) == 0)
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
