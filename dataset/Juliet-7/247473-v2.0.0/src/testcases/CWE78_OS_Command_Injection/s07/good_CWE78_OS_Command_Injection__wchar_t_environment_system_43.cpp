namespace NAMESPACE0
{
void FUN0(wchar_t * &data)
{
    wcscat(data, L"*.*");
}
void FUN1()
{
    wchar_t * data;
    wchar_t data_buf[100] = FULL_COMMAND;
    data = data_buf;
    FUN0(data);
    if (SYSTEM(data) != 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}
} 
