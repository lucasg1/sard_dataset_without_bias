void FUN0()
{
    wchar_t * data;
    wchar_t dataBadBuffer[10];
    wchar_t dataGoodBuffer[10+1];
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = dataGoodBuffer;
        data[0] = L'\0'; 
    }
    {
        wchar_t source[10+1] = SRC_STRING;
        wcscpy(data, source);
        printWLine(data);
    }
}
void FUN1()
{
    wchar_t * data;
    wchar_t dataBadBuffer[10];
    wchar_t dataGoodBuffer[10+1];
    if(globalReturnsTrue())
    {
        data = dataGoodBuffer;
        data[0] = L'\0'; 
    }
    {
        wchar_t source[10+1] = SRC_STRING;
        wcscpy(data, source);
        printWLine(data);
    }
}
