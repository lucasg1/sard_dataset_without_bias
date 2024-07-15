void FUN0()
{
    wchar_t * data;
    wchar_t data_buf[100] = FULL_COMMAND;
    data = data_buf;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        wcscat(data, L"*.*");
        break;
    }
    {
        FILE *pipe;
        pipe = POPEN(data, L"w");
        if (pipe != NULL)
        {
            PCLOSE(pipe);
        }
    }
}
void FUN1()
{
    wchar_t * data;
    wchar_t data_buf[100] = FULL_COMMAND;
    data = data_buf;
    switch(6)
    {
    case 6:
        wcscat(data, L"*.*");
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    {
        FILE *pipe;
        pipe = POPEN(data, L"w");
        if (pipe != NULL)
        {
            PCLOSE(pipe);
        }
    }
}
