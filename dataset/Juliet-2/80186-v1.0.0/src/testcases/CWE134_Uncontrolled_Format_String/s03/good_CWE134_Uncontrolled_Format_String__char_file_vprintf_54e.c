void FUN0(char * data);
void FUN1(char * data)
{
    FUN0(data);
}
void FUN2(char * data);
void FUN3(char * data)
{
    FUN2(data);
}
void FUN4(char * data);
void FUN5()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    strcpy(data, "fixedstringtest");
    FUN4(data);
}
void FUN6(char * data);
void FUN7()
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
    FUN6(data);
}
void FUN9(char * data);
void FUN0(char * data)
{
    FUN9(data);
}
void FUN11(char * data);
void FUN2(char * data)
{
    FUN11(data);
}
void FUN1(char * data);
void FUN4(char * data)
{
    FUN1(data);
}
void FUN3(char * data);
void FUN6(char * data)
{
    FUN3(data);
}
void FUN17(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vprintf(data, args);
        va_end(args);
    }
}
void FUN9(char * data)
{
    FUN17(data, data);
}
void FUN19(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vprintf("%s", args);
        va_end(args);
    }
}
void FUN11(char * data)
{
    FUN19(data, data);
}
