void FUN0(wchar_t * data);
void FUN1(wchar_t * data)
{
    FUN0(data);
}
void FUN1(wchar_t * data);
void FUN3(wchar_t * data)
{
    FUN1(data);
}
void FUN3(wchar_t * data);
void FUN5()
{
    wchar_t * data;
    wchar_t * dataBadBuffer = (wchar_t *)ALLOCA(50*sizeof(wchar_t));
    wchar_t * dataGoodBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    data = dataGoodBuffer;
    data[0] = L'\0'; 
    FUN3(data);
}
void FUN0(wchar_t * data)
{
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
        memcpy(data, source, 100*sizeof(wchar_t));
        data[100-1] = L'\0'; 
        printWLine(data);
    }
}
