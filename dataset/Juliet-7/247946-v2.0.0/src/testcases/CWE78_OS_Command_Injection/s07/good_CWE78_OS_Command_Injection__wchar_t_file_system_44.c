void FUN0(wchar_t * data)
{
    if (SYSTEM(data) != 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}
void FUN1()
{
    wchar_t * data;
    void (*funcPtr) (wchar_t *) = FUN0;
    wchar_t data_buf[100] = FULL_COMMAND;
    data = data_buf;
    wcscat(data, L"*.*");
    funcPtr(data);
}
