namespace NAMESPACE0
{
void FUN0(wchar_t * &data)
{
    data = (wchar_t *)calloc(20, sizeof(wchar_t));
}
} 
namespace NAMESPACE0
{
void FUN0(wchar_t * &data);
void FUN2()
{
    wchar_t * data;
    data = NULL; 
    FUN0(data);
    if (data != NULL)
    {
        wcscpy(data, L"Initialize");
        printWLine(data);
        free(data);
    }
}
} 
