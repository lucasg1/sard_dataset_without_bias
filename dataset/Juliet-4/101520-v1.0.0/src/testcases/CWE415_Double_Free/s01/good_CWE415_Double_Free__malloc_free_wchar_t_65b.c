void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    void (*funcPtr) (wchar_t *) = FUN0;
    data = NULL;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    funcPtr(data);
}
void FUN2(wchar_t * data);
void FUN3()
{
    wchar_t * data;
    void (*funcPtr) (wchar_t *) = FUN2;
    data = NULL;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    free(data);
    funcPtr(data);
}
void FUN0(wchar_t * data)
{
    free(data);
}
void FUN2(wchar_t * data)
{
    ; 
}
