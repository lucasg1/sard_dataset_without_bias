static int VAR0 = 0;
static wchar_t * FUN0(wchar_t * data)
{
    if(VAR0)
    {
        {
            size_t dataLen = wcslen(data);
            wchar_t * environment = GETENV(ENV_VARIABLE);
            if (environment != NULL)
            {
                wcsncat(data+dataLen, environment, 100-dataLen-1);
            }
        }
    }
    return data;
}
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    VAR0 = 1; 
    data = FUN0(data);
<START>
    EXECLP(COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
<END>
}
