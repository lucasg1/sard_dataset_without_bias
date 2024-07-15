static char * VAR0;
static char * VAR1;
static char * VAR2;
void FUN0()
{
    char * data = VAR1;
    {
        char dest[100] = "";
        SNPRINTF(dest, 100-1, data);
        printLine(dest);
    }
}
void FUN1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    strcpy(data, "fixedstringtest");
    VAR1 = data;
    FUN0();
}
void FUN2()
{
    char * data = VAR2;
    {
        char dest[100] = "";
        SNPRINTF(dest, 100-1, "%s", data);
        printLine(dest);
    }
}
void FUN3()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
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
    VAR2 = data;
    FUN2();
}
