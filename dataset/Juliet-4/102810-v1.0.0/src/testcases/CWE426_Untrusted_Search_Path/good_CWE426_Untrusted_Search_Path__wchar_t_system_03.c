void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    if(5!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        wcscpy(data, GOOD_OS_COMMAND);
    }
    if (SYSTEM(data) <= 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    if(5==5)
    {
        wcscpy(data, GOOD_OS_COMMAND);
    }
    if (SYSTEM(data) <= 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}
