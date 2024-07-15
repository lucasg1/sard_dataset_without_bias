void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    void (*funcPtr) (wchar_t *) = FUN0;
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    wcscat(data, L"*.*");
    funcPtr(data);
}
void FUN0(wchar_t * data)
{
    {
        wchar_t *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
        _wspawnv(_P_WAIT, COMMAND_INT_PATH, args);
    }
}
