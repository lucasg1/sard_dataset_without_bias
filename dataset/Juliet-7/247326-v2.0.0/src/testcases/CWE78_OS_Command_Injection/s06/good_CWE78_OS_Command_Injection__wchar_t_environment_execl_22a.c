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
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    VAR0 = 0; 
    data = FUN0(data);
    EXECL(COMMAND_INT_PATH, COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL);
}
wchar_t * FUN1(wchar_t * data);
void FUN5()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    VAR1 = 1; 
    data = FUN1(data);
    EXECL(COMMAND_INT_PATH, COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL);
}
