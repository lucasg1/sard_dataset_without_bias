static int VAR0 = 0;
static int VAR1 = 0;
static wchar_t * FUN0(wchar_t * data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        wcscat(data, L"*.*");
    }
    return data;
}
void FUN1()
{
    wchar_t * data;
    wchar_t data_buf[100] = FULL_COMMAND;
    data = data_buf;
    VAR0 = 0; 
    data = FUN0(data);
    {
        FILE *pipe;
        pipe = POPEN(data, L"w");
        if (pipe != NULL)
        {
            PCLOSE(pipe);
        }
    }
}
static wchar_t * FUN2(wchar_t * data)
{
    if(VAR1)
    {
        wcscat(data, L"*.*");
    }
    return data;
}
void FUN3()
{
    wchar_t * data;
    wchar_t data_buf[100] = FULL_COMMAND;
    data = data_buf;
    VAR1 = 1; 
    data = FUN2(data);
    {
        FILE *pipe;
        pipe = POPEN(data, L"w");
        if (pipe != NULL)
        {
            PCLOSE(pipe);
        }
    }
}
