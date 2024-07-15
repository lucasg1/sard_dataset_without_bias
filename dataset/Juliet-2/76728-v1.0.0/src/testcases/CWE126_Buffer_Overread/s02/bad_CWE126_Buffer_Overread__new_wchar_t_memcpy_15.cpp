namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = new wchar_t[50];
        wmemset(data, L'A', 50-1); 
        data[50-1] = L'\0'; 
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    {
        wchar_t dest[100];
        wmemset(dest, L'C', 100-1);
        dest[100-1] = L'\0'; 
<START>
        memcpy(dest, data, wcslen(dest)*sizeof(wchar_t));
<END>
        dest[100-1] = L'\0';
        printWLine(dest);
        delete [] data;
    }
}
} 
