namespace NAMESPACE0
{
void FUN0(wchar_t * data);
void FUN1(wchar_t * data)
{
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN2(wchar_t * data);
void FUN3(wchar_t * data)
{
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN3(wchar_t * data);
void FUN0(wchar_t * data)
{
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN1(wchar_t * data);
void FUN7()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t;
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN2(wchar_t * data)
{
<START>
    free(data);
<END>
}
} 
