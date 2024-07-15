namespace NAMESPACE0
{
void FUN0(wchar_t * &data)
{
    data = new wchar_t;
    *data = L'A';
}
void FUN1(wchar_t * &data)
{
    data = new wchar_t;
    *data = L'A';
    delete data;
}
} 
namespace NAMESPACE0
{
void FUN0(wchar_t * &data);
void FUN3()
{
    wchar_t * data;
    data = NULL;
    FUN0(data);
    printWcharLine(*data);
}
void FUN1(wchar_t * &data);
void FUN5()
{
    wchar_t * data;
    data = NULL;
    FUN1(data);
    ; 
}
} 
