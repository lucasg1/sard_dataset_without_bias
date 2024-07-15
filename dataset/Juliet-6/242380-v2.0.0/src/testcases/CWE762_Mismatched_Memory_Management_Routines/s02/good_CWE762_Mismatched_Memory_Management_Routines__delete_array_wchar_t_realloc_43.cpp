namespace NAMESPACE0
{
void FUN0(wchar_t * &data)
{
    data = new wchar_t[100];
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    FUN0(data);
    delete [] data;
}
void FUN2(wchar_t * &data)
{
    data = NULL;
    data = (wchar_t *)realloc(data, 100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
}
void FUN3()
{
    wchar_t * data;
    data = NULL;
    FUN2(data);
    free(data);
}
} 
