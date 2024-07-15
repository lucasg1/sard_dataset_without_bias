namespace NAMESPACE0
{
void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN2(wchar_t * data);
void FUN0(wchar_t * data)
{
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN4(wchar_t * data);
void FUN5(wchar_t * data)
{
    FUN4(data);
}
} 
namespace NAMESPACE0
{
void FUN5(wchar_t * data);
void FUN2(wchar_t * data)
{
    FUN5(data);
}
} 
namespace NAMESPACE0
{
void FUN4(wchar_t * data)
{
<START>
    delete data;
<END>
}
} 
