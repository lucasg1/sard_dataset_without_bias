void FUN0()
{
    int h;
    wchar_t * data;
    wchar_t dataBadBuffer[10];
    wchar_t dataGoodBuffer[10+1];
    for(h = 0; h < 1; h++)
    {
        data = dataGoodBuffer;
        data[0] = L'\0'; 
    }
    {
        wchar_t source[10+1] = SRC_STRING;
        memmove(data, source, (wcslen(source) + 1) * sizeof(wchar_t));
        printWLine(data);
    }
}
