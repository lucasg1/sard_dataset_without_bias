static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    wchar_t * data;
    wchar_t dataBadBuffer[10];
    wchar_t dataGoodBuffer[10+1];
    if(STATIC_CONST_FIVE==5)
    {
        data = dataBadBuffer;
        data[0] = L'\0'; 
    }
    {
        wchar_t source[10+1] = SRC_STRING;
<START>
        memmove(data, source, (wcslen(source) + 1) * sizeof(wchar_t));
<END>
        printWLine(data);
    }
}
