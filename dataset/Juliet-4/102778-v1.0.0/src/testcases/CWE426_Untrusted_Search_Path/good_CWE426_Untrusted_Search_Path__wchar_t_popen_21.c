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
        wcscpy(data, GOOD_OS_COMMAND);
    }
    return data;
}
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    VAR0 = 0; 
    data = FUN0(data);
    {
        FILE *pipe;
        pipe = POPEN(data, L"wb");
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
        wcscpy(data, GOOD_OS_COMMAND);
    }
    return data;
}
void FUN3()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    VAR1 = 1; 
    data = FUN2(data);
    {
        FILE *pipe;
        pipe = POPEN(data, L"wb");
        if (pipe != NULL)
        {
            PCLOSE(pipe);
        }
    }
}
