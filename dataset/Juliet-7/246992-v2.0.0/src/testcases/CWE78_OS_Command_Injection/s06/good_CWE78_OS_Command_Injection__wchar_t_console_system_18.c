void FUN0()
{
    wchar_t * data;
    wchar_t data_buf[100] = FULL_COMMAND;
    data = data_buf;
    goto source;
source:
    wcscat(data, L"*.*");
    if (SYSTEM(data) != 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}
