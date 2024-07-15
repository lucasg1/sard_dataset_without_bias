wchar_t * FUN0(wchar_t * data)
{
    wcscat(data, L"*.*");
    return data;
}
wchar_t * FUN0(wchar_t * data);
void FUN2()
{
    wchar_t * data;
    wchar_t data_buf[100] = FULL_COMMAND;
    data = data_buf;
    data = FUN0(data);
    if (SYSTEM(data) != 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}
