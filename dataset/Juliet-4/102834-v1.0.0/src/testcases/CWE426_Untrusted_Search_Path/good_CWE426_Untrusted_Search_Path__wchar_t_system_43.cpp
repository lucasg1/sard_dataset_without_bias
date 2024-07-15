namespace NAMESPACE0
{
void FUN0(wchar_t * &data)
{
    wcscpy(data, GOOD_OS_COMMAND);
}
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    FUN0(data);
    if (SYSTEM(data) <= 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}
} 
