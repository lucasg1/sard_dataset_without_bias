void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    if(globalFive==5)
    {
        wcscpy(data, BAD_OS_COMMAND);
    }
    {
        FILE *pipe;
<START>
        pipe = POPEN(data, L"wb");
<END>
        if (pipe != NULL)
        {
            PCLOSE(pipe);
        }
    }
}
