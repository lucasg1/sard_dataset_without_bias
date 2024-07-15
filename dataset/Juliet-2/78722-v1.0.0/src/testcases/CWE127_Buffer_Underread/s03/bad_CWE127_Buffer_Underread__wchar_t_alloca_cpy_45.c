static wchar_t * VAR0;
static wchar_t * VAR1;
void FUN0()
{
    wchar_t * data = VAR0;
    {
        wchar_t dest[100*2];
        wmemset(dest, L'C', 100*2-1); 
        dest[100*2-1] = L'\0'; 
<START>
        wcscpy(dest, data);
<END>
        printWLine(dest);
    }
}
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
