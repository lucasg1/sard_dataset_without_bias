void FUN0()
{
    wchar_t * data;
    wchar_t * dataBadBuffer = (wchar_t *)ALLOCA(50*sizeof(wchar_t));
    wchar_t * dataGoodBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    data = dataBadBuffer;
    data[0] = L'\0'; 
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
<START>
        memmove(data, source, 100*sizeof(wchar_t));
<END>
        data[100-1] = L'\0'; 
        printWLine(data);
    }
}
