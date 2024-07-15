void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        free(data);
    }
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ; 
    }
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        free(data);
    }
    if(GLOBAL_CONST_TRUE)
    {
        ; 
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
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
    }
    if(GLOBAL_CONST_TRUE)
    {
        free(data);
    }
}
void FUN3()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
    }
    if(GLOBAL_CONST_TRUE)
    {
        free(data);
    }
}
