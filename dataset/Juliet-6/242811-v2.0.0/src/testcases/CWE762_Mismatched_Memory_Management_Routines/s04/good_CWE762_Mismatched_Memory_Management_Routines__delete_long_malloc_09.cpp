namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = (long *)malloc(100*sizeof(long));
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
    long * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
    }
    if(GLOBAL_CONST_TRUE)
    {
        free(data);
    }
}
void FUN2()
{
    long * data;
    data = NULL;
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new long;
    }
    if(GLOBAL_CONST_TRUE)
    {
        delete data;
    }
}
void FUN3()
{
    long * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = new long;
    }
    if(GLOBAL_CONST_TRUE)
    {
        delete data;
    }
}
} 
