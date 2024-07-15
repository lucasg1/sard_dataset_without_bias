namespace NAMESPACE0
{
void FUN0(wchar_t * &data)
{
    data = (wchar_t *)malloc(20*sizeof(wchar_t));
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
<START>
    wcscpy(data, L"Initialize");
<END>
    printWLine(data);
    free(data);
}
} 
