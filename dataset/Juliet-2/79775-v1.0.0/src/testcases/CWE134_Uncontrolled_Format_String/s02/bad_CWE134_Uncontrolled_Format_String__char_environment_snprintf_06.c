static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(STATIC_CONST_FIVE==5)
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
    if(STATIC_CONST_FIVE==5)
    {
        {
            char dest[100] = "";
<START>
            SNPRINTF(dest, 100-1, data);
<END>
            printLine(dest);
        }
    }
}
