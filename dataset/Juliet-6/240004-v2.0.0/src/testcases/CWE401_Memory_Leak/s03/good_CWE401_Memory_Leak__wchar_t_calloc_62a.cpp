namespace NAMESPACE0
{
void FUN0(wchar_t * &data)
{
    data = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    wcscpy(data, L"A String");
    printWLine(data);
}
void FUN1(wchar_t * &data)
{
    data = (wchar_t *)calloc(100, sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    wcscpy(data, L"A String");
    printWLine(data);
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
    ; 
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
