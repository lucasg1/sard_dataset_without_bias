wchar_t * VAR0;
wchar_t * VAR1;
void FUN0();
void FUN1()
{
    wchar_t * data;
    wchar_t * dataBadBuffer = (wchar_t *)ALLOCA((10)*sizeof(wchar_t));
    wchar_t * dataGoodBuffer = (wchar_t *)ALLOCA((10+1)*sizeof(wchar_t));
    data = dataBadBuffer;
    data[0] = L'\0'; 
    VAR0 = data;
    FUN0();
}
extern wchar_t * VAR0;
extern wchar_t * VAR1;
void FUN0()
{
    wchar_t * data = VAR0;
    {
        wchar_t source[10+1] = SRC_STRING;
<START>
        memcpy(data, source, (wcslen(source) + 1) * sizeof(wchar_t));
<END>
        printWLine(data);
    }
}
