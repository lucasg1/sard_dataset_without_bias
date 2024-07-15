namespace NAMESPACE0
{
static int VAR1 = 0;
static wchar_t * FUN0(wchar_t * data)
{
    if(VAR1)
    {
        wmemset(data, L'A', 100-1); 
        data[100-1] = L'\0'; 
    }
    return data;
}
void FUN1()
{
    wchar_t * data;
    data = new wchar_t[100];
    VAR1 = 1; 
    data = FUN0(data);
    {
        wchar_t dest[50] = L"";
<START>
        SNPRINTF(dest, wcslen(data), L"%s", data);
<END>
        printWLine(data);
        delete [] data;
    }
    ;
}
} 
