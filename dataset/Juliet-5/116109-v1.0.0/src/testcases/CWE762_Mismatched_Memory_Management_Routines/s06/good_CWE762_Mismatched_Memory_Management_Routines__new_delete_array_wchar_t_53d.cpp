namespace NAMESPACE0
{
void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t[100];
    FUN0(data);
}
void FUN2(wchar_t * data);
void FUN3()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t;
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN5(wchar_t * data);
void FUN6(wchar_t * data)
{
    FUN5(data);
}
void FUN7(wchar_t * data);
void FUN8(wchar_t * data)
{
    FUN7(data);
}
} 
namespace NAMESPACE0
{
void FUN6(wchar_t * data);
void FUN0(wchar_t * data)
{
    FUN6(data);
}
void FUN8(wchar_t * data);
void FUN2(wchar_t * data)
{
    FUN8(data);
}
} 
namespace NAMESPACE0
{
void FUN5(wchar_t * data)
{
    delete [] data;
}
void FUN7(wchar_t * data)
{
    delete data;
}
} 
