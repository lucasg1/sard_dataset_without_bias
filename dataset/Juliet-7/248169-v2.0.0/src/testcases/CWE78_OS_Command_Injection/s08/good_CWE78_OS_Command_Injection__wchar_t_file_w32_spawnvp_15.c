void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        wcscat(data, L"*.*");
        break;
    }
    {
        wchar_t *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
        _wspawnvp(_P_WAIT, COMMAND_INT, args);
    }
}
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    switch(6)
    {
    case 6:
        wcscat(data, L"*.*");
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    {
        wchar_t *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
        _wspawnvp(_P_WAIT, COMMAND_INT, args);
    }
}
