namespace NAMESPACE0
{
void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t;
    delete data;
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN0(wchar_t * data)
{
<START>
    delete data;
<END>
}
} 
