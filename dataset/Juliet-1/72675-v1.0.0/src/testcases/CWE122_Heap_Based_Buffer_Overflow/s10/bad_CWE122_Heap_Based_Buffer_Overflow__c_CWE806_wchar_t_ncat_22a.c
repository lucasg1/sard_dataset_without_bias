extern int VAR0;
wchar_t * FUN0(wchar_t * data)
{
    if(VAR0)
    {
        wmemset(data, L'A', 100-1); 
        data[100-1] = L'\0'; 
    }
    return data;
}
int VAR0 = 0;
wchar_t * FUN0(wchar_t * data);
void FUN2()
{
    wchar_t * data;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    VAR0 = 1; 
    data = FUN0(data);
    {
        wchar_t dest[50] = L"";
<START>
        wcsncat(dest, data, wcslen(data));
<END>
        dest[50-1] = L'\0'; 
        printWLine(data);
        free(data);
    }
}
