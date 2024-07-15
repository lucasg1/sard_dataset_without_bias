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
void FUN1(wchar_t * data);
void FUN3()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t[100];
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN4(wchar_t * data);
void FUN0(wchar_t * data)
{
    FUN4(data);
}
} 
namespace NAMESPACE0
{
void FUN6(wchar_t * data);
void FUN4(wchar_t * data)
{
    FUN6(data);
}
} 
namespace NAMESPACE0
{
void FUN6(wchar_t * data)
{
<START>
    delete data;
<END>
}
} 
