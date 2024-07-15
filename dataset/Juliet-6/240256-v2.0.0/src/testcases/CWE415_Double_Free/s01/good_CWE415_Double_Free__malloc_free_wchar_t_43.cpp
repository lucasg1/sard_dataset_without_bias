namespace NAMESPACE0
{
void FUN0(wchar_t * &data)
{
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    FUN0(data);
    free(data);
}
void FUN2(wchar_t * &data)
{
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    free(data);
}
void FUN3()
{
    wchar_t * data;
    data = NULL;
    FUN2(data);
    ; 
}
} 
