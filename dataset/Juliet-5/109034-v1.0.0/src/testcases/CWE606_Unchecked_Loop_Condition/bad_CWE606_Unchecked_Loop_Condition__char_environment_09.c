void FUN0()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(GLOBAL_CONST_TRUE)
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
    if(GLOBAL_CONST_TRUE)
    {
        {
            int i, n, intVariable;
            if (sscanf(data, "%d", &n) == 1)
            {
                intVariable = 0;
<START>
                for (i = 0; i < n; i++)
<END>
                {
                    intVariable++; 
                }
                printIntLine(intVariable);
            }
        }
    }
}
