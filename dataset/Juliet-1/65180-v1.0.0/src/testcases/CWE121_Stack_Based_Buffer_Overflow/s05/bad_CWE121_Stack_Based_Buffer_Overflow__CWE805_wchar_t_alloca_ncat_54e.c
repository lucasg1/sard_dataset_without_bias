void FUN0(wchar_t * data);
void FUN1(wchar_t * data)
{
    FUN0(data);
}
void FUN2(wchar_t * data);
void FUN0(wchar_t * data)
{
    FUN2(data);
}
void FUN4(wchar_t * data);
void FUN5()
{
    wchar_t * data;
    wchar_t * dataBadBuffer = (wchar_t *)ALLOCA(50*sizeof(wchar_t));
    wchar_t * dataGoodBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    data = dataBadBuffer;
    data[0] = L'\0'; 
    FUN4(data);
}
void FUN1(wchar_t * data);
void FUN4(wchar_t * data)
{
    FUN1(data);
}
void FUN2(wchar_t * data)
{
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
<START>
        wcsncat(data, source, 100);
<END>
        printWLine(data);
    }
}
