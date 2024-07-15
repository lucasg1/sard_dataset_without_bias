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
        char * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            strncat(data+dataLen, environment, 100-dataLen-1);
        }
    }
    dataArray[2] = data;
    FUN2(dataArray);
}
void FUN0(char * dataArray[])
{
    char * data = dataArray[2];
    {
        char dest[100] = "";
        SNPRINTF(dest, 100-1, data);
        printLine(dest);
    }
}
void FUN2(char * dataArray[])
{
    char * data = dataArray[2];
    {
        char dest[100] = "";
        SNPRINTF(dest, 100-1, "%s", data);
        printLine(dest);
    }
}
