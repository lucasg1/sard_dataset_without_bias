void FUN0()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(globalTrue)
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
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        fprintf(stdout, "%s\n", data);
    }
}
void FUN1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(globalTrue)
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
    if(globalTrue)
    {
        fprintf(stdout, "%s\n", data);
    }
}
void FUN2()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        strcpy(data, "fixedstringtest");
    }
    if(globalTrue)
    {
        fprintf(stdout, data);
    }
}
void FUN3()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(globalTrue)
    {
        strcpy(data, "fixedstringtest");
    }
    if(globalTrue)
    {
        fprintf(stdout, data);
    }
}
