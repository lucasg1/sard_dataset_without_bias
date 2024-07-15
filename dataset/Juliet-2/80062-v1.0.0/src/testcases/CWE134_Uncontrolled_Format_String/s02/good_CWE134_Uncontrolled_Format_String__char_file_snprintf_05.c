static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(staticTrue)
    {
        {
            size_t dataLen = strlen(data);
            FILE * pFile;
            if (100-dataLen > 1)
            {
                pFile = fopen(FILENAME, "r");
                if (pFile != NULL)
                {
                    if (fgets(data+dataLen, (int)(100-dataLen), pFile) == NULL)
                    {
                        printLine("fgets() failed");
                        data[dataLen] = '\0';
                    }
                    fclose(pFile);
                }
            }
        }
    }
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char dest[100] = "";
            SNPRINTF(dest, 100-1, "%s", data);
            printLine(dest);
        }
    }
}
void FUN1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(staticTrue)
    {
        {
            size_t dataLen = strlen(data);
            FILE * pFile;
            if (100-dataLen > 1)
            {
                pFile = fopen(FILENAME, "r");
                if (pFile != NULL)
                {
                    if (fgets(data+dataLen, (int)(100-dataLen), pFile) == NULL)
                    {
                        printLine("fgets() failed");
                        data[dataLen] = '\0';
                    }
                    fclose(pFile);
                }
            }
        }
    }
    if(staticTrue)
    {
        {
            char dest[100] = "";
            SNPRINTF(dest, 100-1, "%s", data);
            printLine(dest);
        }
    }
}
void FUN2()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        strcpy(data, "fixedstringtest");
    }
    if(staticTrue)
    {
        {
            char dest[100] = "";
            SNPRINTF(dest, 100-1, data);
            printLine(dest);
        }
    }
}
void FUN3()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(staticTrue)
    {
        strcpy(data, "fixedstringtest");
    }
    if(staticTrue)
    {
        {
            char dest[100] = "";
            SNPRINTF(dest, 100-1, data);
            printLine(dest);
        }
    }
}
