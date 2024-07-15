extern int VAR0;
char * FUN0(char * data)
{
    if(VAR0)
    {
        {
            size_t dataLen = strlen(data);
            char * environment = GETENV(ENV_VARIABLE);
            if (environment != NULL)
            {
                strncat(data+dataLen, environment, 250-dataLen-1);
            }
        }
    }
    return data;
}
int VAR0 = 0;
char * FUN0(char * data);
void FUN2()
{
    char * data;
    char dataBuffer[250] = "PATH=";
    data = dataBuffer;
    VAR0 = 1; 
    data = FUN0(data);
<START>
    PUTENV(data);
<END>
}
