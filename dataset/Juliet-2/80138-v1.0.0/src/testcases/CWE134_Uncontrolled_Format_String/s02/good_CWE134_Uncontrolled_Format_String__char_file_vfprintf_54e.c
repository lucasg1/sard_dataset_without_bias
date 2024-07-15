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
void FUN6(char * data)
{
    FUN5(data);
}
void FUN7(char * data);
void FUN8(char * data)
{
    FUN7(data);
}
void FUN6(char * data);
void FUN10(char * data)
{
    FUN6(data);
}
void FUN8(char * data);
void FUN12(char * data)
{
    FUN8(data);
}
void FUN10(char * data);
void FUN0(char * data)
{
    FUN10(data);
}
void FUN12(char * data);
void FUN2(char * data)
{
    FUN12(data);
}
void FUN17(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vfprintf(stdout, data, args);
        va_end(args);
    }
}
void FUN5(char * data)
{
    FUN17(data, data);
}
void FUN19(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vfprintf(stdout, "%s", args);
        va_end(args);
    }
}
void FUN7(char * data)
{
    FUN19(data, data);
}
