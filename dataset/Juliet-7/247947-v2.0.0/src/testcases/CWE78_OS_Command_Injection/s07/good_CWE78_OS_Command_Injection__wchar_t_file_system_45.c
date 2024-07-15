static wchar_t * VAR0;
static wchar_t * VAR1;
void FUN0()
{
    wchar_t * data = VAR1;
    if (SYSTEM(data) != 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}
void FUN1()
{
    wchar_t * data;
    wchar_t data_buf[100] = FULL_COMMAND;
    data = data_buf;
    wcscat(data, L"*.*");
    VAR1 = data;
    FUN0();
}
