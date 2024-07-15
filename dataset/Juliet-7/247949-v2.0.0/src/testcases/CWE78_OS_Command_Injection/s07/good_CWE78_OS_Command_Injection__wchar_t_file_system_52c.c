void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    wchar_t data_buf[100] = FULL_COMMAND;
    data = data_buf;
    wcscat(data, L"*.*");
    FUN0(data);
}
void FUN3(wchar_t * data);
void FUN0(wchar_t * data)
{
    FUN3(data);
}
void FUN3(wchar_t * data)
{
    if (SYSTEM(data) != 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}
