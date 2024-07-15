wchar_t * FUN0(wchar_t * data)
{
    wmemset(data, L'A', 100-1); 
    data[100-1] = L'\0'; 
    return data;
}
wchar_t * FUN0(wchar_t * data);
void FUN2()
{
    wchar_t * data;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    data = FUN0(data);
    {
        wchar_t dest[50] = L"";
<START>
        memcpy(dest, data, wcslen(data)*sizeof(wchar_t));
<END>
        dest[50-1] = L'\0'; 
        printWLine(data);
        free(data);
    }
}
