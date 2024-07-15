namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    if(globalTrue)
    {
        data = new int64_t;
    }
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        delete data;
    }
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    if(globalTrue)
    {
        data = new int64_t;
    }
    if(globalTrue)
    {
        delete data;
    }
}
void FUN2()
{
    int64_t * data;
    data = NULL;
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
    }
    if(globalTrue)
    {
        free(data);
    }
}
void FUN3()
{
    int64_t * data;
    data = NULL;
    if(globalTrue)
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
    }
    if(globalTrue)
    {
        free(data);
    }
}
} 
