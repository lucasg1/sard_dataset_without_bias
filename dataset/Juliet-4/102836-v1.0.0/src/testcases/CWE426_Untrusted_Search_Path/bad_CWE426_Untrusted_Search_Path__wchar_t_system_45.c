static wchar_t * VAR0;
static wchar_t * VAR1;
void FUN0()
{
    wchar_t * data = VAR0;
<START>
    if (SYSTEM(data) <= 0)
<END>
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
    wcscpy(data, BAD_OS_COMMAND);
    VAR0 = data;
    FUN0();
}
