int VAR0 = 0;
int VAR1 = 0;
int VAR2 = 0;
void FUN0(char * data);
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
    VAR0 = 0; 
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
        char * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            strncat(data+dataLen, environment, 100-dataLen-1);
        }
    }
    VAR1 = 1; 
    FUN2(data);
}
void FUN4(char * data);
void FUN5()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    strcpy(data, "fixedstringtest");
    VAR2 = 1; 
    FUN4(data);
}
extern int VAR0;
extern int VAR1;
extern int VAR2;
void FUN0(char * data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        printf("%s\n", data);
    }
}
void FUN2(char * data)
{
    if(VAR1)
    {
        printf("%s\n", data);
    }
}
void FUN4(char * data)
{
    if(VAR2)
    {
        printf(data);
    }
}
