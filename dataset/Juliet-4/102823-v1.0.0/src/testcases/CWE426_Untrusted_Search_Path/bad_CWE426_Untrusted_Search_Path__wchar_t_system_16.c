void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    while(1)
    {
        wcscpy(data, BAD_OS_COMMAND);
        break;
    }
<START>
    if (SYSTEM(data) <= 0)
<END>
    {
        printLine("command execution failed!");
        exit(1);
    }
}
