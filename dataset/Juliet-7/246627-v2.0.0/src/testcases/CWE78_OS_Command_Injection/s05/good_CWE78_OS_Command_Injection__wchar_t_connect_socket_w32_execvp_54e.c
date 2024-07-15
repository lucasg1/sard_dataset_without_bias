void FUN0(wchar_t * data);
void FUN1(wchar_t * data)
{
    FUN0(data);
}
void FUN2(wchar_t * data);
void FUN3()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    wcscat(data, L"*.*");
    FUN2(data);
}
void FUN1(wchar_t * data);
void FUN2(wchar_t * data)
{
    FUN1(data);
}
void FUN7(wchar_t * data);
void FUN0(wchar_t * data)
{
    FUN7(data);
}
void FUN7(wchar_t * data)
{
    {
        wchar_t *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
        EXECVP(COMMAND_INT, args);
    }
}
