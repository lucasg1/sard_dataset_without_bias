namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t * &dataRef = data;
    data = new wchar_t[100];
    wmemset(data, L'A', 100-1); 
    data[100-1] = L'\0'; 
    {
        wchar_t * data = dataRef;
        {
            wchar_t dest[50] = L"";
<START>
            SNPRINTF(dest, wcslen(data), L"%s", data);
<END>
            printWLine(data);
            delete [] data;
        }
    }
}
} 
