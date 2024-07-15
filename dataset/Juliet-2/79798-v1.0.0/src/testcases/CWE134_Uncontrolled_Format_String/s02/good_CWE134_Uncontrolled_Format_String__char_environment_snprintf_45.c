static char * VAR0;
static char * VAR1;
static char * VAR2;
void FUN0()
{
    char * data = VAR1;
    {
        char dest[100] = "";
        SNPRINTF(dest, 100-1, data);
        printLine(dest);
    }
}
void FUN1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    strcpy(data, "fixedstringtest");
    VAR1 = data;
    FUN0();
}
void FUN2()
{
    char * data = VAR2;
    {
        char dest[100] = "";
        SNPRINTF(dest, 100-1, "%s", data);
        printLine(dest);
    }
}
void FUN3()
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
    VAR2 = data;
    FUN2();
}
