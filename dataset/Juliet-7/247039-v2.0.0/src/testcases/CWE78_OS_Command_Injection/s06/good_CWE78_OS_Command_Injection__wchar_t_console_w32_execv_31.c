void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    wcscat(data, L"*.*");
    {
        wchar_t * dataCopy = data;
        wchar_t * data = dataCopy;
        {
            wchar_t *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
            EXECV(COMMAND_INT_PATH, args);
        }
    }
}
