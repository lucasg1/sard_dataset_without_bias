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
    if(FUN1())
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
        size_t i, sourceLen;
        sourceLen = wcslen(source);
        for (i = 0; i < sourceLen + 1; i++)
        {
            data[i] = source[i];
        }
        printWLine(data);
    }
}
void FUN3()
{
    wchar_t * data;
    wchar_t dataBadBuffer[10];
    wchar_t dataGoodBuffer[10+1];
    if(FUN0())
    {
        data = dataGoodBuffer;
        data[0] = L'\0'; 
    }
    {
        wchar_t source[10+1] = SRC_STRING;
        size_t i, sourceLen;
        sourceLen = wcslen(source);
        for (i = 0; i < sourceLen + 1; i++)
        {
            data[i] = source[i];
        }
        printWLine(data);
    }
}
