namespace NAMESPACE0
{
static wchar_t * FUN0(wchar_t * data)
{
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    return data;
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = FUN0(data);
    free(data);
}
static wchar_t * FUN2(wchar_t * data)
{
    data = new wchar_t[100];
    return data;
}
void FUN3()
{
    wchar_t * data;
    data = NULL;
    data = FUN2(data);
    delete [] data;
}
} 
