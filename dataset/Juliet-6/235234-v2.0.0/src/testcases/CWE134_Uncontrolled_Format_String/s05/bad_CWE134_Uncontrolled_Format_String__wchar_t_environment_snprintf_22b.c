int VAR0 = 0;
void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    {
        size_t dataLen = wcslen(data);
        wchar_t * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            wcsncat(data+dataLen, environment, 100-dataLen-1);
        }
    }
    VAR0 = 1; 
    FUN0(data);
}
extern int VAR0;
void FUN0(wchar_t * data)
{
    if(VAR0)
    {
        {
            wchar_t dest[100] = L"";
<START>
            SNPRINTF(dest, 100-1, data);
<END>
            printWLine(dest);
        }
    }
}
