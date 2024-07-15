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
    EXECLP(COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
}
