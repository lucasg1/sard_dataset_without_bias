void FUN0()
{
    int h;
    wchar_t * data;
    wchar_t * dataBadBuffer = (wchar_t *)ALLOCA(50*sizeof(wchar_t));
    wchar_t * dataGoodBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    for(h = 0; h < 1; h++)
    {
        data = dataGoodBuffer;
        data[0] = L'\0'; 
    }
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
        wcsncat(data, source, 100);
        printWLine(data);
    }
}
