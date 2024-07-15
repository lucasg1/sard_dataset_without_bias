namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = new wchar_t[100];
    while(1)
    {
        wmemset(data, L'A', 100-1); 
        data[100-1] = L'\0'; 
        break;
    }
    {
        wchar_t dest[50] = L"";
<START>
        wcscat(dest, data);
<END>
        printWLine(data);
        delete [] data;
    }
}
} 
