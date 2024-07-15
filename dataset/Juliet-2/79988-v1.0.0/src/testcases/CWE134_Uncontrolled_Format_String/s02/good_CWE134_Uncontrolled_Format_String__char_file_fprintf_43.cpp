namespace NAMESPACE0
{
void FUN0(char * &data)
{
    strcpy(data, "fixedstringtest");
}
void FUN1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    FUN0(data);
    fprintf(stdout, data);
}
void FUN2(char * &data)
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
void FUN3()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    FUN2(data);
    fprintf(stdout, "%s\n", data);
}
} 
