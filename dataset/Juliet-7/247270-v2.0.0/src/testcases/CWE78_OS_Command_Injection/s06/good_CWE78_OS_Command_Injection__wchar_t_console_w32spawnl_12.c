void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    if(globalReturnsTrueOrFalse())
    {
        wcscat(data, L"*.*");
    }
    else
    {
        wcscat(data, L"*.*");
    }
    _wspawnl(_P_WAIT, COMMAND_INT_PATH, COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL);
}
