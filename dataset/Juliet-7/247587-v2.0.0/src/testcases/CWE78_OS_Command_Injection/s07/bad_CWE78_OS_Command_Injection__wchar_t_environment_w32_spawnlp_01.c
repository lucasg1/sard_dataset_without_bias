void FUN0()
{
    wchar_t * data;
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
<START>
    _wspawnlp(_P_WAIT, COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
<END>
}
