namespace NAMESPACE0
{
static wchar_t * FUN0(wchar_t * data)
{
    data = new wchar_t[50];
    data[0] = L'\0'; 
    return data;
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = FUN0(data);
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
<START>
        SNPRINTF(data, 100, L"%s", source);
<END>
        printWLine(data);
        delete [] data;
    }
}
} 
