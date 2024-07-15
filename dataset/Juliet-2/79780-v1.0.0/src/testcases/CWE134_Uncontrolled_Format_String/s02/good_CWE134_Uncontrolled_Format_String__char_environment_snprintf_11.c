void FUN0()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(globalReturnsTrue())
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
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char dest[100] = "";
            SNPRINTF(dest, 100-1, "%s", data);
            printLine(dest);
        }
    }
}
void FUN1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(globalReturnsTrue())
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
    if(globalReturnsTrue())
    {
        {
            char dest[100] = "";
            SNPRINTF(dest, 100-1, "%s", data);
            printLine(dest);
        }
    }
}
void FUN2()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        strcpy(data, "fixedstringtest");
    }
    if(globalReturnsTrue())
    {
        {
            char dest[100] = "";
            SNPRINTF(dest, 100-1, data);
            printLine(dest);
        }
    }
}
void FUN3()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(globalReturnsTrue())
    {
        strcpy(data, "fixedstringtest");
    }
    if(globalReturnsTrue())
    {
        {
            char dest[100] = "";
            SNPRINTF(dest, 100-1, data);
            printLine(dest);
        }
    }
}
