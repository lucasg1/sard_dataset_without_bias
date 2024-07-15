void FUN0()
{
    wchar_t * data;
    wchar_t data_buf[100] = FULL_COMMAND;
    data = data_buf;
    wcscat(data, L"*.*");
    {
        wchar_t * dataCopy = data;
        wchar_t * data = dataCopy;
        {
            FILE *pipe;
            pipe = POPEN(data, L"w");
            if (pipe != NULL)
            {
                PCLOSE(pipe);
            }
        }
    }
}
