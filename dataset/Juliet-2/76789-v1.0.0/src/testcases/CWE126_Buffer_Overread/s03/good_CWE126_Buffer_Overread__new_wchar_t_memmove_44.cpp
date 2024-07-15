namespace NAMESPACE0
{
void FUN0(wchar_t * data)
{
    {
        wchar_t dest[100];
        wmemset(dest, L'C', 100-1);
        dest[100-1] = L'\0'; 
        memmove(dest, data, wcslen(dest)*sizeof(wchar_t));
        dest[100-1] = L'\0';
        printWLine(dest);
        delete [] data;
    }
}
void FUN1()
{
    wchar_t * data;
    void (*funcPtr) (wchar_t *) = FUN0;
    data = NULL;
    data = new wchar_t[100];
    wmemset(data, L'A', 100-1); 
    data[100-1] = L'\0'; 
    funcPtr(data);
}
} 
