static wchar_t * FUN0(wchar_t * data)
{
    wcscpy(data, BAD_OS_COMMAND);
    return data;
}
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    data = FUN0(data);
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
