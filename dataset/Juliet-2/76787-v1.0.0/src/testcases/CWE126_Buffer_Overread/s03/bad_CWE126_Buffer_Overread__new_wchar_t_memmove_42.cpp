namespace NAMESPACE0
{
static wchar_t * FUN0(wchar_t * data)
{
    data = new wchar_t[50];
    wmemset(data, L'A', 50-1); 
    data[50-1] = L'\0'; 
    return data;
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = FUN0(data);
    {
        wchar_t dest[100];
        wmemset(dest, L'C', 100-1);
        dest[100-1] = L'\0'; 
<START>
        memmove(dest, data, wcslen(dest)*sizeof(wchar_t));
<END>
        dest[100-1] = L'\0';
        printWLine(dest);
        delete [] data;
    }
}
} 
