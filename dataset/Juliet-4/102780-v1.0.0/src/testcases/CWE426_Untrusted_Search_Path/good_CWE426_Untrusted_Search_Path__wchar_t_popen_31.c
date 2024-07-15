void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    wcscpy(data, GOOD_OS_COMMAND);
    {
        wchar_t * dataCopy = data;
        wchar_t * data = dataCopy;
        {
            FILE *pipe;
            pipe = POPEN(data, L"wb");
            if (pipe != NULL)
            {
                PCLOSE(pipe);
            }
        }
    }
}
