void FUN0(wchar_t * * dataPtr);
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    wcscpy(data, BAD_OS_COMMAND);
    FUN0(&data);
}
void FUN0(wchar_t * * dataPtr)
{
    wchar_t * data = *dataPtr;
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
