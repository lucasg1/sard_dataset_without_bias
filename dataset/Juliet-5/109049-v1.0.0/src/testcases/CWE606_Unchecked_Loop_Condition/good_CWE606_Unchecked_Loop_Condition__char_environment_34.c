typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE606_Unchecked_Loop_Condition__char_environment_34_unionType;
void FUN0()
{
    char * data;
    CWE606_Unchecked_Loop_Condition__char_environment_34_unionType myUnion;
    char dataBuffer[100] = "";
    data = dataBuffer;
    strcpy(data, "15");
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
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
}
void FUN1()
{
    char * data;
    CWE606_Unchecked_Loop_Condition__char_environment_34_unionType myUnion;
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
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
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
}
