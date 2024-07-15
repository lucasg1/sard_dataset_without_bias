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
        char * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            strncat(data+dataLen, environment, 100-dataLen-1);
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
void FUN5(char * data)
{
    fprintf(stdout, data);
}
void FUN7(char * data)
{
    fprintf(stdout, "%s\n", data);
}
