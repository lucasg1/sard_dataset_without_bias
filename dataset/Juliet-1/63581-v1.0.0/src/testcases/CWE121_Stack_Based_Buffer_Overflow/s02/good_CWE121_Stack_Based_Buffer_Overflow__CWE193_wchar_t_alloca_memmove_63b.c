void FUN0(wchar_t * * data);
void FUN1()
{
    wchar_t * data;
    wchar_t * dataBadBuffer = (wchar_t *)ALLOCA((10)*sizeof(wchar_t));
    wchar_t * dataGoodBuffer = (wchar_t *)ALLOCA((10+1)*sizeof(wchar_t));
    data = dataGoodBuffer;
    data[0] = L'\0'; 
    FUN0(&data);
}
void FUN0(wchar_t * * dataPtr)
{
    wchar_t * data = *dataPtr;
    {
        wchar_t source[10+1] = SRC_STRING;
        memmove(data, source, (wcslen(source) + 1) * sizeof(wchar_t));
        printWLine(data);
    }
}
