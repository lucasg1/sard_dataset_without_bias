namespace NAMESPACE0
{
void FUN0(wchar_t * &data)
{
    wmemset(data, L'A', 50-1); 
    data[50-1] = L'\0'; 
}
} 
namespace NAMESPACE0
{
void FUN0(wchar_t * &data);
void FUN2()
{
    wchar_t * data;
    data = new wchar_t[100];
    FUN0(data);
    {
        wchar_t dest[50] = L"";
        wcscat(dest, data);
        printWLine(data);
        delete [] data;
    }
}
} 
