void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    wmemset(data, L'A', 50-1); 
    data[50-1] = L'\0'; 
    FUN0(data);
}
void FUN3(wchar_t * data);
void FUN0(wchar_t * data)
{
    FUN3(data);
}
void FUN5(wchar_t * data);
void FUN6(wchar_t * data)
{
    FUN5(data);
}
void FUN6(wchar_t * data);
void FUN3(wchar_t * data)
{
    FUN6(data);
}
void FUN5(wchar_t * data)
{
    {
        wchar_t dest[50] = L"";
        memmove(dest, data, wcslen(data)*sizeof(wchar_t));
        dest[50-1] = L'\0'; 
        printWLine(data);
        free(data);
    }
}
