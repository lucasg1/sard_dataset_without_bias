static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(FUN0())
    {
        {
            size_t dataLen = strlen(data);
            if (100-dataLen > 1)
            {
                if (fgets(data+dataLen, (int)(100-dataLen), stdin) != NULL)
                {
                    dataLen = strlen(data);
                    if (dataLen > 0 && data[dataLen-1] == '\n')
                    {
                        data[dataLen-1] = '\0';
                    }
                }
                else
                {
                    printLine("fgets() failed");
                    data[dataLen] = '\0';
                }
            }
        }
    }
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        printf("%s\n", data);
    }
}
void FUN3()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(FUN0())
    {
        {
            size_t dataLen = strlen(data);
            if (100-dataLen > 1)
            {
                if (fgets(data+dataLen, (int)(100-dataLen), stdin) != NULL)
                {
                    dataLen = strlen(data);
                    if (dataLen > 0 && data[dataLen-1] == '\n')
                    {
                        data[dataLen-1] = '\0';
                    }
                }
                else
                {
                    printLine("fgets() failed");
                    data[dataLen] = '\0';
                }
            }
        }
    }
    if(FUN0())
    {
        printf("%s\n", data);
    }
}
void FUN4()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        strcpy(data, "fixedstringtest");
    }
    if(FUN0())
    {
        printf(data);
    }
}
void FUN5()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(FUN0())
    {
        strcpy(data, "fixedstringtest");
    }
    if(FUN0())
    {
        printf(data);
    }
}
