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
void FUN1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    goto source;
source:
    strcpy(data, "15");
    goto sink;
sink:
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
