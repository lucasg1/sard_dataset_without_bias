namespace NAMESPACE0
{
wchar_t * FUN0(wchar_t * data)
{
    data = new wchar_t[100];
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
    free(data);
<END>
}
} 
