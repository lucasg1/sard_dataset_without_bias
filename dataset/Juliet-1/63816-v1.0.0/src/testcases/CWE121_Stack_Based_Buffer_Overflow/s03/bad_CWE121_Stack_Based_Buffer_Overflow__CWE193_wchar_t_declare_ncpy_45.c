static wchar_t * VAR0;
static wchar_t * VAR1;
void FUN0()
{
    wchar_t * data = VAR0;
    {
        wchar_t source[10+1] = SRC_STRING;
<START>
        wcsncpy(data, source, wcslen(source) + 1);
<END>
        printWLine(data);
    }
}
void FUN1()
{
    wchar_t * data;
    wchar_t dataBadBuffer[10];
    wchar_t dataGoodBuffer[10+1];
    data = dataBadBuffer;
    data[0] = L'\0'; 
    VAR0 = data;
    FUN0();
}
