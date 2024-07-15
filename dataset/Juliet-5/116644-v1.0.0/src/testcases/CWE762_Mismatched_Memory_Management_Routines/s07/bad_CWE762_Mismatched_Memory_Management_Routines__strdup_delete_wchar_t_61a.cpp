namespace NAMESPACE0
{
wchar_t * FUN0(wchar_t * data)
{
    {
        wchar_t myString[] = L"myString";
        data = wcsdup(myString);
    }
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
<START>
    delete data;
<END>
}
} 
