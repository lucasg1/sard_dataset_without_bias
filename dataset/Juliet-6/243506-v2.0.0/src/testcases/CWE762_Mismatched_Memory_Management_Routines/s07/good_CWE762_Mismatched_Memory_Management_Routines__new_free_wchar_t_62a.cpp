namespace NAMESPACE0
{
void FUN0(wchar_t * &data)
{
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
}
void FUN1(wchar_t * &data)
{
    data = new wchar_t;
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
    free(data);
}
void FUN1(wchar_t * &data);
void FUN5()
{
    wchar_t * data;
    data = NULL;
    FUN1(data);
    delete data;
}
} 
