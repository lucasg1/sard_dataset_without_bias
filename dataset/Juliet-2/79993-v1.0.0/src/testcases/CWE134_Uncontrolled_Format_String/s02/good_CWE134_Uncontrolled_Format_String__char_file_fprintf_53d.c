void FUN0(char * data);
void FUN1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    strcpy(data, "fixedstringtest");
    FUN0(data);
}
void FUN2(char * data);
void FUN3()
{
    char * data;
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
    FUN2(data);
}
void FUN5(char * data);
void FUN0(char * data)
{
    FUN5(data);
}
void FUN7(char * data);
void FUN2(char * data)
{
    FUN7(data);
}
void FUN9(char * data);
void FUN5(char * data)
{
    FUN9(data);
}
void FUN11(char * data);
void FUN7(char * data)
{
    FUN11(data);
}
void FUN9(char * data)
{
    fprintf(stdout, data);
}
void FUN11(char * data)
{
    fprintf(stdout, "%s\n", data);
}
