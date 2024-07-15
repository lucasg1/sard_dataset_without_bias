namespace NAMESPACE0
{
void FUN0(wchar_t * data)
{
    delete data;
}
void FUN1()
{
    wchar_t * data;
    void (*funcPtr) (wchar_t *) = FUN0;
    data = NULL;
    data = new wchar_t;
    funcPtr(data);
}
void FUN2(wchar_t * data)
{
    free(data);
}
void FUN3()
{
    wchar_t * data;
    void (*funcPtr) (wchar_t *) = FUN2;
    data = NULL;
    data = (wchar_t *)calloc(100, sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    funcPtr(data);
}
} 
