namespace NAMESPACE0
{
wchar_t * FUN0(wchar_t * data)
{
    data = (wchar_t *)calloc(100, sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
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
