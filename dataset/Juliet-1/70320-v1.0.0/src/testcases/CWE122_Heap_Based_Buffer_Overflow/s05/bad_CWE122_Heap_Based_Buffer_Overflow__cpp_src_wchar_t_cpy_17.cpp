namespace NAMESPACE0
{
void FUN0()
{
    int i;
    wchar_t * data;
    data = new wchar_t[100];
    for(i = 0; i < 1; i++)
    {
        wmemset(data, L'A', 100-1); 
        data[100-1] = L'\0'; 
    }
    {
        wchar_t dest[50] = L"";
<START>
        wcscpy(dest, data);
<END>
        printWLine(data);
        delete [] data;
    }
}
} 
