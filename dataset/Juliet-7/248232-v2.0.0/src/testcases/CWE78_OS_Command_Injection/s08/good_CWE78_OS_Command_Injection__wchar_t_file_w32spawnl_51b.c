void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    wcscat(data, L"*.*");
    FUN0(data);
}
void FUN0(wchar_t * data)
{
    _wspawnl(_P_WAIT, COMMAND_INT_PATH, COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL);
}
