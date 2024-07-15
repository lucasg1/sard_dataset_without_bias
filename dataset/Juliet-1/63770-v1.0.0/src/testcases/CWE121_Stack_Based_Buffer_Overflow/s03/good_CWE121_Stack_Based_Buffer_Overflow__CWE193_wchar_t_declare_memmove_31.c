void FUN0()
{
    wchar_t * data;
    wchar_t dataBadBuffer[10];
    wchar_t dataGoodBuffer[10+1];
    data = dataGoodBuffer;
    data[0] = L'\0'; 
    {
        wchar_t * dataCopy = data;
        wchar_t * data = dataCopy;
        {
            wchar_t source[10+1] = SRC_STRING;
            memmove(data, source, (wcslen(source) + 1) * sizeof(wchar_t));
            printWLine(data);
        }
    }
}
