void FUN0()
{
    wchar_t * data;
    wchar_t * *dataPtr1 = &data;
    wchar_t * *dataPtr2 = &data;
    wchar_t data_buf[100] = FULL_COMMAND;
    data = data_buf;
    {
        wchar_t * data = *dataPtr1;
        wcscat(data, L"*.*");
        *dataPtr1 = data;
    }
    {
        wchar_t * data = *dataPtr2;
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
