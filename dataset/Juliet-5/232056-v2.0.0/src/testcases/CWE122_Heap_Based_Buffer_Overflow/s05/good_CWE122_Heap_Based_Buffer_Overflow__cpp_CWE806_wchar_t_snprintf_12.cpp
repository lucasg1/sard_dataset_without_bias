namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = new wchar_t[100];
    if(globalReturnsTrueOrFalse())
    {
        wmemset(data, L'A', 50-1); 
        data[50-1] = L'\0'; 
    }
    else
    {
        wmemset(data, L'A', 50-1); 
        data[50-1] = L'\0'; 
    }
    {
        wchar_t dest[50] = L"";
        SNPRINTF(dest, wcslen(data), L"%s", data);
        printWLine(data);
        delete [] data;
    }
}
} 
