void FUN0()
{
    wchar_t * data;
    wchar_t * *dataPtr1 = &data;
    wchar_t * *dataPtr2 = &data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    {
        wchar_t * data = *dataPtr1;
        wcscpy(data, BAD_OS_COMMAND);
        *dataPtr1 = data;
    }
    {
        wchar_t * data = *dataPtr2;
<START>
        if (SYSTEM(data) <= 0)
<END>
        {
            printLine("command execution failed!");
            exit(1);
        }
    }
}
