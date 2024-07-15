void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    wcscpy(data, BAD_OS_COMMAND);
    {
        wchar_t * dataCopy = data;
        wchar_t * data = dataCopy;
<START>
        if (SYSTEM(data) <= 0)
<END>
        {
            printLine("command execution failed!");
            exit(1);
        }
    }
}
