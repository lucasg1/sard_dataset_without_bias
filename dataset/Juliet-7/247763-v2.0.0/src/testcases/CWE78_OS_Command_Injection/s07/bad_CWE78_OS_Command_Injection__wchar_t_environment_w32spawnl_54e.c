void FUN0(wchar_t * data);
void FUN1(wchar_t * data)
{
    FUN0(data);
}
void FUN2(wchar_t * data);
void FUN0(wchar_t * data)
{
    FUN2(data);
}
void FUN1(wchar_t * data);
void FUN5()
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
    FUN1(data);
}
void FUN6(wchar_t * data);
void FUN2(wchar_t * data)
{
    FUN6(data);
}
void FUN6(wchar_t * data)
{
<START>
    _wspawnl(_P_WAIT, COMMAND_INT_PATH, COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL);
<END>
}
