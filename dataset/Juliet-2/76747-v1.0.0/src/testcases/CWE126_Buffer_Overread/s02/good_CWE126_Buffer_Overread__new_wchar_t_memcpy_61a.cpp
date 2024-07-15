namespace NAMESPACE0
{
wchar_t * FUN0(wchar_t * data)
{
    data = new wchar_t[100];
    wmemset(data, L'A', 100-1); 
    data[100-1] = L'\0'; 
    return data;
}
} 
namespace NAMESPACE0
{
wchar_t * FUN0(wchar_t * data);
void FUN2()
{
    wchar_t * data;
    data = NULL;
    data = FUN0(data);
    {
        wchar_t dest[100];
        wmemset(dest, L'C', 100-1);
        dest[100-1] = L'\0'; 
        memcpy(dest, data, wcslen(dest)*sizeof(wchar_t));
        dest[100-1] = L'\0';
        printWLine(dest);
        delete [] data;
    }
}
} 
