static int VAR0 = 0;
static wchar_t * FUN0(wchar_t * data)
{
    if(VAR0)
    {
        wcscpy(data, BAD_OS_COMMAND);
    }
    return data;
}
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    VAR0 = 1; 
    data = FUN0(data);
<START>
    if (SYSTEM(data) <= 0)
<END>
    {
        printLine("command execution failed!");
        exit(1);
    }
}
