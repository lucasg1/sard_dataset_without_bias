static wchar_t * VAR0;
static wchar_t * VAR1;
void FUN0()
{
    wchar_t * data = VAR0;
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
        wcsncpy(data, source, 100-1);
        data[100-1] = L'\0'; 
        printWLine(data);
    }
}
void FUN1()
{
    wchar_t * data;
    wchar_t dataBadBuffer[50];
    wchar_t dataGoodBuffer[100];
<START>
    data = dataBadBuffer;
<END>
    data[0] = L'\0'; 
    VAR0 = data;
    FUN0();
}
