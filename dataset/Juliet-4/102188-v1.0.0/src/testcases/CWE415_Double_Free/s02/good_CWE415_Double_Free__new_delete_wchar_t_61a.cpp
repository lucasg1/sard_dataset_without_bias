namespace NAMESPACE0
{
wchar_t * FUN0(wchar_t * data)
{
    data = new wchar_t;
    return data;
}
wchar_t * FUN1(wchar_t * data)
{
    data = new wchar_t;
    delete data;
    return data;
}
} 
namespace NAMESPACE0
{
wchar_t * FUN0(wchar_t * data);
void FUN3()
{
    wchar_t * data;
    data = NULL;
    data = FUN0(data);
    delete data;
}
wchar_t * FUN1(wchar_t * data);
void FUN5()
{
    wchar_t * data;
    data = NULL;
    data = FUN1(data);
    ; 
}
} 
