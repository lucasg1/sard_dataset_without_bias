void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    wmemset(data, L'A', 50-1); 
    data[50-1] = L'\0'; 
    FUN0(data);
}
void FUN0(wchar_t * data)
{
    {
        wchar_t dest[50] = L"";
        SNPRINTF(dest, wcslen(data), L"%s", data);
        printWLine(data);
        free(data);
    }
}
