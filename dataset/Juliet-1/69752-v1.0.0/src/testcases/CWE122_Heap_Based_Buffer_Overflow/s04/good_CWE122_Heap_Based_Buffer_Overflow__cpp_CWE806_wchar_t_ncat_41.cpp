namespace NAMESPACE0
{
void FUN0(wchar_t * data)
{
    {
        wchar_t dest[50] = L"";
        wcsncat(dest, data, wcslen(data));
        dest[50-1] = L'\0'; 
        printWLine(data);
        delete [] data;
    }
}
void FUN1()
{
    wchar_t * data;
    data = new wchar_t[100];
    wmemset(data, L'A', 50-1); 
    data[50-1] = L'\0'; 
    FUN0(data);
}
} 
