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
void FUN1(wchar_t * data);
void FUN5(wchar_t * data)
{
    FUN1(data);
}
void FUN5(wchar_t * data);
void FUN7()
{
    wchar_t * data;
    wchar_t * dataBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    data = dataBuffer;
    wmemset(data, L'A', 100-1); 
    data[100-1] = L'\0'; 
    FUN5(data);
}
void FUN2(wchar_t * data)
{
    {
        wchar_t dest[50] = L"";
<START>
        wcscpy(dest, data);
<END>
        printWLine(data);
    }
}
