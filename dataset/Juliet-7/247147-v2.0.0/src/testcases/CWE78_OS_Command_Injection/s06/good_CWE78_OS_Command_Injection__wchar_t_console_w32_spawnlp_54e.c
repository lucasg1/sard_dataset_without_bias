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
void FUN5(wchar_t * data);
void FUN0(wchar_t * data)
{
    FUN5(data);
}
void FUN1(wchar_t * data);
void FUN2(wchar_t * data)
{
    FUN1(data);
}
void FUN5(wchar_t * data)
{
    _wspawnlp(_P_WAIT, COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
}
