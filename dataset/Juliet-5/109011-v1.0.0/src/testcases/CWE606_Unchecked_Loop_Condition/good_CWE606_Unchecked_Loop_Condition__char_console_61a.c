char * FUN0(char * data)
{
    strcpy(data, "15");
    return data;
}
char * FUN1(char * data)
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
    return data;
}
char * FUN0(char * data);
void FUN3()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    data = FUN0(data);
    {
        int i, n, intVariable;
        if (sscanf(data, "%d", &n) == 1)
        {
            intVariable = 0;
            for (i = 0; i < n; i++)
            {
                intVariable++; 
            }
            printIntLine(intVariable);
        }
    }
}
char * FUN1(char * data);
void FUN5()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    data = FUN1(data);
    {
        int i, n, intVariable;
        if (sscanf(data, "%d", &n) == 1)
        {
            if (n < MAX_LOOP)
            {
                intVariable = 0;
                for (i = 0; i < n; i++)
                {
                    intVariable++; 
                }
                printIntLine(intVariable);
            }
        }
    }
}
