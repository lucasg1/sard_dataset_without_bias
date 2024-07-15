char * VAR0;
char * VAR1;
char * VAR2;
void FUN0();
void FUN1()
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
    VAR0 = data;
    FUN0();
}
extern char * VAR0;
extern char * VAR1;
extern char * VAR2;
void FUN0()
{
    char * data = VAR0;
    {
        char dest[100] = "";
<START>
        SNPRINTF(dest, 100-1, data);
<END>
        printLine(dest);
    }
}
