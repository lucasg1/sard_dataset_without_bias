namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t * &dataRef = data;
    data = NULL;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    {
        wchar_t * data = dataRef;
        free(data);
    }
}
void FUN1()
{
    wchar_t * data;
    wchar_t * &dataRef = data;
    data = NULL;
    data = new wchar_t[100];
    {
        wchar_t * data = dataRef;
        delete [] data;
    }
}
} 
