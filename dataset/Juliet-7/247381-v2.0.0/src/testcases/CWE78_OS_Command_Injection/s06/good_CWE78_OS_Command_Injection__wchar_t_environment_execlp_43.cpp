namespace NAMESPACE0
{
void FUN0(wchar_t * &data)
{
    wcscat(data, L"*.*");
}
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    FUN0(data);
    EXECLP(COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
}
} 
