namespace NAMESPACE0
{
void FUN0(char * &data)
{
    strcpy(data, "fixedstringtest");
}
void FUN1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    FUN0(data);
    fprintf(stdout, data);
}
void FUN2(char * &data)
{
    {
        size_t dataLen = strlen(data);
        char * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            strncat(data+dataLen, environment, 100-dataLen-1);
        }
    }
}
void FUN3()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    FUN2(data);
    fprintf(stdout, "%s\n", data);
}
} 
