static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(STATIC_CONST_TRUE)
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
    if(STATIC_CONST_TRUE)
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
