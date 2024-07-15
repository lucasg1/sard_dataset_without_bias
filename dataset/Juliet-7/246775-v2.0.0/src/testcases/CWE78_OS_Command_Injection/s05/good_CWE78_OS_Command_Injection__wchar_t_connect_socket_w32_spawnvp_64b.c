void FUN0(void * dataVoidPtr);
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    wcscat(data, L"*.*");
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    wchar_t * * dataPtr = (wchar_t * *)dataVoidPtr;
    wchar_t * data = (*dataPtr);
    {
        wchar_t *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
        _wspawnvp(_P_WAIT, COMMAND_INT, args);
    }
}
