namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = (wchar_t *)calloc(100, sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
    }
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        free(data);
    }
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = (wchar_t *)calloc(100, sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        free(data);
    }
}
void FUN2()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new wchar_t;
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        delete data;
    }
}
void FUN3()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = new wchar_t;
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        delete data;
    }
}
} 
