namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t * &dataRef = data;
    data = new wchar_t[100];
    wmemset(data, L'A', 50-1); 
    data[50-1] = L'\0'; 
    {
        wchar_t * data = dataRef;
        {
            wchar_t dest[50] = L"";
            memmove(dest, data, wcslen(data)*sizeof(wchar_t));
            dest[50-1] = L'\0'; 
            printWLine(data);
            delete [] data;
        }
    }
}
} 
