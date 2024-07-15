wchar_t * VAR0;
wchar_t * VAR1;
void FUN0();
void FUN1()
{
    wchar_t * data;
    wchar_t data_buf[100] = FULL_COMMAND;
    data = data_buf;
    {
        size_t dataLen = wcslen(data);
        wchar_t * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            wcsncat(data+dataLen, environment, 100-dataLen-1);
        }
    }
    VAR0 = data;
    FUN0();
}
extern wchar_t * VAR0;
extern wchar_t * VAR1;
void FUN0()
{
    wchar_t * data = VAR0;
<START>
    if (SYSTEM(data) != 0)
<END>
    {
        printLine("command execution failed!");
        exit(1);
    }
}
