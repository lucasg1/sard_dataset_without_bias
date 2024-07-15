void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    wcscat(data, L"*.*");
    FUN0(data);
}
void FUN3(wchar_t * data);
void FUN4(wchar_t * data)
{
    FUN3(data);
}
void FUN4(wchar_t * data);
void FUN6(wchar_t * data)
{
    FUN4(data);
}
void FUN6(wchar_t * data);
void FUN0(wchar_t * data)
{
    FUN6(data);
}
void FUN3(wchar_t * data)
{
    EXECLP(COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
}
