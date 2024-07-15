void FUN0()
{
    int h;
    wchar_t * data;
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    for(h = 0; h < 1; h++)
    {
        wcscat(data, L"*.*");
    }
    {
        wchar_t *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
        _wspawnv(_P_WAIT, COMMAND_INT_PATH, args);
    }
}
