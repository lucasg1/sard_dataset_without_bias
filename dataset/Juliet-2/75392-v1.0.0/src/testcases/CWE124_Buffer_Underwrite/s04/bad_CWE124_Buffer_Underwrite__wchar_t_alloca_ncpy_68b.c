wchar_t * VAR0;
wchar_t * VAR1;
void FUN0();
void FUN1()
{
    wchar_t * data;
    wchar_t * dataBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    wmemset(dataBuffer, L'A', 100-1);
    dataBuffer[100-1] = L'\0';
    data = dataBuffer - 8;
    VAR0 = data;
    FUN0();
}
extern wchar_t * VAR0;
extern wchar_t * VAR1;
void FUN0()
{
    wchar_t * data = VAR0;
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
<START>
        wcsncpy(data, source, 100-1);
<END>
        data[100-1] = L'\0';
        printWLine(data);
    }
}
