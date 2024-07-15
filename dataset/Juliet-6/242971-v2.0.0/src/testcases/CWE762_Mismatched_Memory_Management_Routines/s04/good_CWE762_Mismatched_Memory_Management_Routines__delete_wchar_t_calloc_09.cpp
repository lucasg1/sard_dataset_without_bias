namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = (wchar_t *)calloc(100, sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
    }
    if(GLOBAL_CONST_FALSE)
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
    if(GLOBAL_CONST_TRUE)
    {
        data = (wchar_t *)calloc(100, sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
    }
    if(GLOBAL_CONST_TRUE)
    {
        free(data);
    }
}
void FUN2()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new wchar_t;
    }
    if(GLOBAL_CONST_TRUE)
    {
        delete data;
    }
}
void FUN3()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = new wchar_t;
    }
    if(GLOBAL_CONST_TRUE)
    {
        delete data;
    }
}
} 
