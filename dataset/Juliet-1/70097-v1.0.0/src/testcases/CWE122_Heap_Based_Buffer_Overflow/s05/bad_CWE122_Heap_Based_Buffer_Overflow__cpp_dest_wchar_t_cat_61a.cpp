namespace NAMESPACE0
{
wchar_t * FUN0(wchar_t * data)
{
    data = new wchar_t[50];
    data[0] = L'\0'; 
    return data;
}
} 
namespace NAMESPACE0
{
wchar_t * FUN0(wchar_t * data);
void FUN2()
{
    wchar_t * data;
    data = NULL;
    data = FUN0(data);
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
<START>
        wcscat(data, source);
<END>
        printWLine(data);
        delete [] data;
    }
}
} 
