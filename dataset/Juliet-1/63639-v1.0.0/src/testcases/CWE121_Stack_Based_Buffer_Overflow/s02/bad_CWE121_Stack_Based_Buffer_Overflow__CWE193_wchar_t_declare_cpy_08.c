static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    wchar_t * data;
    wchar_t dataBadBuffer[10];
    wchar_t dataGoodBuffer[10+1];
    if(FUN0())
    {
        data = dataBadBuffer;
        data[0] = L'\0'; 
    }
    {
        wchar_t source[10+1] = SRC_STRING;
<START>
        wcscpy(data, source);
<END>
        printWLine(data);
    }
}
