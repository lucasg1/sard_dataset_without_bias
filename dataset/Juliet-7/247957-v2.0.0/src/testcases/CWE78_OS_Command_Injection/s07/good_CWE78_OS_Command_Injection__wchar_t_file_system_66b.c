void FUN0(wchar_t * dataArray[]);
void FUN1()
{
    wchar_t * data;
    wchar_t * dataArray[5];
    wchar_t data_buf[100] = FULL_COMMAND;
    data = data_buf;
    wcscat(data, L"*.*");
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN0(wchar_t * dataArray[])
{
    wchar_t * data = dataArray[2];
    if (SYSTEM(data) != 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}
