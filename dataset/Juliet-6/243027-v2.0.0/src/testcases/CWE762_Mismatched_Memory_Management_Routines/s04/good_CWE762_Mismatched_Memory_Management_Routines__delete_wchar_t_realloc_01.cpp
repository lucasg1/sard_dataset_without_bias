namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t;
    delete data;
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = NULL;
    data = (wchar_t *)realloc(data, 100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    free(data);
}
} 
