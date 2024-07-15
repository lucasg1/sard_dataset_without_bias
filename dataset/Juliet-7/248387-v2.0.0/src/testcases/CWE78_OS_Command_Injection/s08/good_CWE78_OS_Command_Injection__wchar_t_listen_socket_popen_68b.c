wchar_t * VAR0;
wchar_t * VAR1;
void FUN0();
void FUN1()
{
    wchar_t * data;
    wchar_t data_buf[100] = FULL_COMMAND;
    data = data_buf;
    wcscat(data, L"*.*");
    VAR1 = data;
    FUN0();
}
extern wchar_t * VAR0;
extern wchar_t * VAR1;
void FUN0()
{
    wchar_t * data = VAR1;
    {
        FILE *pipe;
        pipe = POPEN(data, L"w");
        if (pipe != NULL)
        {
            PCLOSE(pipe);
        }
    }
}
