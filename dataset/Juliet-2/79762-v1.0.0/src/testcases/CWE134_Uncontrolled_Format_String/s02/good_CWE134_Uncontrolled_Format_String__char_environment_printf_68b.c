char * VAR0;
char * VAR1;
char * VAR2;
void FUN0();
void FUN1();
void FUN2()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    strcpy(data, "fixedstringtest");
    VAR1 = data;
    FUN0();
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
    FUN1();
}
extern char * VAR0;
extern char * VAR1;
extern char * VAR2;
void FUN0()
{
    char * data = VAR1;
    printf(data);
}
void FUN1()
{
    char * data = VAR2;
    printf("%s\n", data);
}
