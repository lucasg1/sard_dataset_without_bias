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
        wcscat(data, NEW_PATH);
    }
    return data;
}
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[250] = L"PATH=";
    data = dataBuffer;
    VAR0 = 0; 
    data = FUN0(data);
    PUTENV(data);
}
static wchar_t * FUN2(wchar_t * data)
{
    if(VAR1)
    {
        wcscat(data, NEW_PATH);
    }
    return data;
}
void FUN3()
{
    wchar_t * data;
    wchar_t dataBuffer[250] = L"PATH=";
    data = dataBuffer;
    VAR1 = 1; 
    data = FUN2(data);
    PUTENV(data);
}
