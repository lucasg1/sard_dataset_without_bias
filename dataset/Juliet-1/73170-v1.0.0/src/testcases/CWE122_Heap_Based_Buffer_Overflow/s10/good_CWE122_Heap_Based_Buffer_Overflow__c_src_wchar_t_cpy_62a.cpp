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
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    FUN0(data);
    {
        wchar_t dest[50] = L"";
        wcscpy(dest, data);
        printWLine(data);
        free(data);
    }
}
} 
