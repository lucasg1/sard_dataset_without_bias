void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    FUN0(data);
}
void FUN2(wchar_t * data);
void FUN3()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    free(data);
    FUN2(data);
}
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
void FUN5(wchar_t * data)
{
    free(data);
}
void FUN7(wchar_t * data)
{
    ; 
}
