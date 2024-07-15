namespace NAMESPACE0
{
wchar_t * FUN0(wchar_t * data)
{
    data = new wchar_t;
    return data;
}
wchar_t * FUN1(wchar_t * data)
{
    data = (wchar_t *)calloc(100, sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
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
    free(data);
}
} 
