void FUN0()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(GLOBAL_CONST_FIVE==5)
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
    if(GLOBAL_CONST_FIVE==5)
    {
<START>
        fprintf(stdout, data);
<END>
    }
}
