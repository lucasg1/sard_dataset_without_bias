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
void FUN5(char * data)
{
    FUN4(data);
}
void FUN6(char * data);
void FUN7(char * data)
{
    FUN6(data);
}
void FUN5(char * data);
void FUN9()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    strcpy(data, "fixedstringtest");
    FUN5(data);
}
void FUN7(char * data);
void FUN11()
{
    char * data;
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
    FUN7(data);
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
void FUN0(char * data)
{
    {
        char dest[100] = "";
        SNPRINTF(dest, 100-1, data);
        printLine(dest);
    }
}
void FUN2(char * data)
{
    {
        char dest[100] = "";
        SNPRINTF(dest, 100-1, "%s", data);
        printLine(dest);
    }
}
