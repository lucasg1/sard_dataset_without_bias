static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    wchar_t * data;
    wchar_t data_buf[100] = FULL_COMMAND;
    data = data_buf;
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        wcscat(data, L"*.*");
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
    if(staticTrue)
    {
        wcscat(data, L"*.*");
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
