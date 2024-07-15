void FUN0()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    goto source;
source:
    {
        size_t dataLen = strlen(data);
        char * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            strncat(data+dataLen, environment, 100-dataLen-1);
        }
    }
    goto sink;
sink:
    fprintf(stdout, "%s\n", data);
}
void FUN1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    goto source;
source:
    strcpy(data, "fixedstringtest");
    goto sink;
sink:
    fprintf(stdout, data);
}
