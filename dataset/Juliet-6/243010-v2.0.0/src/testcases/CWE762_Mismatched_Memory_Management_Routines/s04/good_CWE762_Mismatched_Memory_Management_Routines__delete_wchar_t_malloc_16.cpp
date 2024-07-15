namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    while(1)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        break;
    }
    while(1)
    {
        free(data);
        break;
    }
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    while(1)
    {
        data = new wchar_t;
        break;
    }
    while(1)
    {
        delete data;
        break;
    }
}
} 
