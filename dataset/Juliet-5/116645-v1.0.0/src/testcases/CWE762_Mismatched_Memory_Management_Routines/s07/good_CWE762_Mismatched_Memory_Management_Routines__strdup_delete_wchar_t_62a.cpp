namespace NAMESPACE0
{
void FUN0(wchar_t * &data)
{
    data = new wchar_t;
}
void FUN1(wchar_t * &data)
{
    {
        wchar_t myString[] = L"myString";
        data = wcsdup(myString);
    }
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
    delete data;
}
void FUN1(wchar_t * &data);
void FUN5()
{
    wchar_t * data;
    data = NULL;
    FUN1(data);
    free(data);
}
} 
