extern wchar_t * VAR0;
extern wchar_t * VAR1;
void FUN0()
{
    wchar_t * data = VAR0;
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
wchar_t * VAR0;
wchar_t * VAR1;
void FUN0();
void FUN2()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
<START>
<END>
    ; 
    VAR0 = data;
    FUN0();
}
