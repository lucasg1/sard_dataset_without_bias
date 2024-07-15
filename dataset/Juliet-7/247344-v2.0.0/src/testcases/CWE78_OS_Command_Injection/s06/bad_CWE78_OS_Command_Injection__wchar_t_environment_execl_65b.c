void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    void (*funcPtr) (wchar_t *) = FUN0;
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    {
        size_t dataLen = wcslen(data);
        wchar_t * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            wcsncat(data+dataLen, environment, 100-dataLen-1);
        }
    }
    funcPtr(data);
}
void FUN0(wchar_t * data)
{
<START>
    EXECL(COMMAND_INT_PATH, COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL);
<END>
}
