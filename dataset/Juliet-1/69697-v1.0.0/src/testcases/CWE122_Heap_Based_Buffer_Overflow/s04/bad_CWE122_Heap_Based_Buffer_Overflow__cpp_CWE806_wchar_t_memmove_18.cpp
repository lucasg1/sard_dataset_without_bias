namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = new wchar_t[100];
    goto source;
source:
    wmemset(data, L'A', 100-1); 
    data[100-1] = L'\0'; 
    {
        wchar_t dest[50] = L"";
<START>
        memmove(dest, data, wcslen(data)*sizeof(wchar_t));
<END>
        dest[50-1] = L'\0'; 
        printWLine(data);
        delete [] data;
    }
}
} 
