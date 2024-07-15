namespace NAMESPACE0
{
void FUN0(wchar_t * &data)
{
    {
        wchar_t myString[] = L"myString";
        data = wcsdup(myString);
    }
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
    delete data;
<END>
}
} 
