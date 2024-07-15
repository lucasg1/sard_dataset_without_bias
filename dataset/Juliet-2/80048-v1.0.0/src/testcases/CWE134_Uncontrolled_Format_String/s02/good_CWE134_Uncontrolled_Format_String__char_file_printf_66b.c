void FUN0(char * dataArray[]);
void FUN1()
{
    char * data;
    char * dataArray[5];
    char dataBuffer[100] = "";
    data = dataBuffer;
    strcpy(data, "fixedstringtest");
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN2(char * dataArray[]);
void FUN3()
{
    char * data;
    char * dataArray[5];
    char dataBuffer[100] = "";
    data = dataBuffer;
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
    dataArray[2] = data;
    FUN2(dataArray);
}
void FUN0(char * dataArray[])
{
    char * data = dataArray[2];
    printf(data);
}
void FUN2(char * dataArray[])
{
    char * data = dataArray[2];
    printf("%s\n", data);
}
