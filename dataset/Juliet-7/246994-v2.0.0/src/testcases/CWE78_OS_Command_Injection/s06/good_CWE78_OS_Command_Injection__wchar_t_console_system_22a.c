extern int VAR0;
extern int VAR1;
wchar_t * FUN0(wchar_t * data)
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
wchar_t * FUN1(wchar_t * data)
{
    if(VAR1)
    {
        wcscat(data, L"*.*");
    }
    return data;
}
int VAR0 = 0;
int VAR1 = 0;
wchar_t * FUN0(wchar_t * data);
void FUN3()
{
    wchar_t * data;
    wchar_t data_buf[100] = FULL_COMMAND;
    data = data_buf;
    VAR0 = 0; 
    data = FUN0(data);
    if (SYSTEM(data) != 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}
wchar_t * FUN1(wchar_t * data);
void FUN5()
{
    wchar_t * data;
    wchar_t data_buf[100] = FULL_COMMAND;
    data = data_buf;
    VAR1 = 1; 
    data = FUN1(data);
    if (SYSTEM(data) != 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}
