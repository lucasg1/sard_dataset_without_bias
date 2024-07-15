void FUN0(wchar_t * data)
{
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
    void (*funcPtr) (wchar_t *) = FUN0;
    wchar_t data_buf[100] = FULL_COMMAND;
    data = data_buf;
    wcscat(data, L"*.*");
    funcPtr(data);
}
