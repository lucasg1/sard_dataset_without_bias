namespace NAMESPACE0
{
void FUN0(wchar_t * * dataPtr);
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t;
    FUN0(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(wchar_t * * dataPtr)
{
    wchar_t * data = *dataPtr;
<START>
    free(data);
<END>
}
} 
