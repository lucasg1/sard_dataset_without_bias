void FUN0(wchar_t * data);
void FUN1(wchar_t * data)
{
    FUN0(data);
}
void FUN2(wchar_t * data);
void FUN3()
{
    wchar_t * data;
    wchar_t * dataBadBuffer = (wchar_t *)ALLOCA(50*sizeof(wchar_t));
    wchar_t * dataGoodBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    wmemset(dataBadBuffer, L'A', 50-1); 
    dataBadBuffer[50-1] = L'\0'; 
    wmemset(dataGoodBuffer, L'A', 100-1); 
    dataGoodBuffer[100-1] = L'\0'; 
    data = dataGoodBuffer;
    FUN2(data);
}
void FUN5(wchar_t * data);
void FUN2(wchar_t * data)
{
    FUN5(data);
}
void FUN1(wchar_t * data);
void FUN5(wchar_t * data)
{
    FUN1(data);
}
void FUN0(wchar_t * data)
{
    {
        wchar_t dest[100];
        wmemset(dest, L'C', 100-1);
        dest[100-1] = L'\0'; 
        memcpy(dest, data, wcslen(dest)*sizeof(wchar_t));
        dest[100-1] = L'\0';
        printWLine(dest);
    }
}
