namespace NAMESPACE0
{
void FUN0(wchar_t * data)
{
    delete [] data;
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t[100];
    FUN0(data);
}
void FUN2(wchar_t * data)
{
    free(data);
}
void FUN3()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)calloc(100, sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    FUN2(data);
}
} 
