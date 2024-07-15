namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    strcpy(data, "fixedstringtest");
    {
        char * data = dataRef;
        {
            char dest[100] = "";
            SNPRINTF(dest, 100-1, data);
            printLine(dest);
        }
    }
}
void FUN1()
{
    char * data;
    char * &dataRef = data;
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
    {
        char * data = dataRef;
        {
            char dest[100] = "";
            SNPRINTF(dest, 100-1, "%s", data);
            printLine(dest);
        }
    }
}
} 
