int VAR0 = 0;
wchar_t * FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    VAR0 = 1; 
    data = FUN0(data);
    {
        size_t sourceLen;
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
        sourceLen = wcslen(source);
        wcsncat(data, source, sourceLen);
        printWLine(data);
    }
}
extern int VAR0;
wchar_t * FUN0(wchar_t * data)
{
    if(VAR0)
    {
<START>
<END>
        ; 
    }
    return data;
}
