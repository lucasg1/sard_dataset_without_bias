static int staticFive = 5;
void FUN0()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(staticFive==5)
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
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        printf("%s\n", data);
    }
}
void FUN1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(staticFive==5)
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
    if(staticFive==5)
    {
        printf("%s\n", data);
    }
}
void FUN2()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        strcpy(data, "fixedstringtest");
    }
    if(staticFive==5)
    {
        printf(data);
    }
}
void FUN3()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(staticFive==5)
    {
        strcpy(data, "fixedstringtest");
    }
    if(staticFive==5)
    {
        printf(data);
    }
}
