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
void FUN0(wchar_t * data)
{
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN1(wchar_t * data);
void FUN5()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t[100];
    delete [] data;
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN2(wchar_t * data)
{
<START>
    delete [] data;
<END>
}
} 
