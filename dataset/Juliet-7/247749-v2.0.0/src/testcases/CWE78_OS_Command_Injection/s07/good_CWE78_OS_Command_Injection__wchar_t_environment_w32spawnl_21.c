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
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    VAR0 = 0; 
    data = FUN0(data);
    _wspawnl(_P_WAIT, COMMAND_INT_PATH, COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL);
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
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    VAR1 = 1; 
    data = FUN2(data);
    _wspawnl(_P_WAIT, COMMAND_INT_PATH, COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL);
}
