void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        wcscpy(data, GOOD_OS_COMMAND);
    }
    {
        FILE *pipe;
        pipe = POPEN(data, L"wb");
        if (pipe != NULL)
        {
            PCLOSE(pipe);
        }
    }
}
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    if(1)
    {
        wcscpy(data, GOOD_OS_COMMAND);
    }
    {
        FILE *pipe;
        pipe = POPEN(data, L"wb");
        if (pipe != NULL)
        {
            PCLOSE(pipe);
        }
    }
}
