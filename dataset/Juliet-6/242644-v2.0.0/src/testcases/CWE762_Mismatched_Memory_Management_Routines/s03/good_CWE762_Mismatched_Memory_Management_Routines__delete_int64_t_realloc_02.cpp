namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    if(1)
    {
        data = NULL;
        data = (int64_t *)realloc(data, 100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
    }
    if(0)
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
    int64_t * data;
    data = NULL;
    if(1)
    {
        data = NULL;
        data = (int64_t *)realloc(data, 100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
    }
    if(1)
    {
        free(data);
    }
}
void FUN2()
{
    int64_t * data;
    data = NULL;
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new int64_t;
    }
    if(1)
    {
        delete data;
    }
}
void FUN3()
{
    int64_t * data;
    data = NULL;
    if(1)
    {
        data = new int64_t;
    }
    if(1)
    {
        delete data;
    }
}
} 
