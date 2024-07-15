namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    while(1)
    {
        data = new wchar_t[50];
        wmemset(data, L'A', 50-1); 
        data[50-1] = L'\0'; 
        break;
    }
    {
        size_t i, destLen;
        wchar_t dest[100];
        wmemset(dest, L'C', 100-1);
        dest[100-1] = L'\0'; 
        destLen = wcslen(dest);
        for (i = 0; i < destLen; i++)
        {
<START>
            dest[i] = data[i];
<END>
        }
        dest[100-1] = L'\0';
        printWLine(dest);
        delete [] data;
    }
}
} 
