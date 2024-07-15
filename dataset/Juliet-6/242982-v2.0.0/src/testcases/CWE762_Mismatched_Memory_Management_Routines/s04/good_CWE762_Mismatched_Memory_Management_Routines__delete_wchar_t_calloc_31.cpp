namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t;
    {
        wchar_t * dataCopy = data;
        wchar_t * data = dataCopy;
        delete data;
    }
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)calloc(100, sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    {
        wchar_t * dataCopy = data;
        wchar_t * data = dataCopy;
        free(data);
    }
}
} 
