void FUN0(wchar_t * data);
void FUN1(wchar_t * data)
{
    FUN0(data);
}
void FUN2(wchar_t * data);
void FUN3(wchar_t * data)
{
    FUN2(data);
}
void FUN3(wchar_t * data);
void FUN5()
{
    wchar_t * data;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    wmemset(data, L'A', 50-1); 
    data[50-1] = L'\0'; 
    FUN3(data);
}
void FUN1(wchar_t * data);
void FUN2(wchar_t * data)
{
    FUN1(data);
}
void FUN0(wchar_t * data)
{
    {
        wchar_t dest[50] = L"";
        wcscpy(dest, data);
        printWLine(data);
        free(data);
    }
}
