namespace NAMESPACE0
{
wchar_t * FUN0(wchar_t * data)
{
    wmemset(data, L'A', 50-1); 
    data[50-1] = L'\0'; 
    return data;
}
} 
namespace NAMESPACE0
{
wchar_t * FUN0(wchar_t * data);
void FUN2()
{
    wchar_t * data;
    data = new wchar_t[100];
    data = FUN0(data);
    {
        wchar_t dest[50] = L"";
        wcscpy(dest, data);
        printWLine(data);
        delete [] data;
    }
}
} 
