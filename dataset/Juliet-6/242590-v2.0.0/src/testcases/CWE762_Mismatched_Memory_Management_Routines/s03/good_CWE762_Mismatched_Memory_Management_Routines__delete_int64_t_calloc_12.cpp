namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = (int64_t *)calloc(100, sizeof(int64_t));
        if (data == NULL) {exit(-1);}
    }
    else
    {
        data = (int64_t *)calloc(100, sizeof(int64_t));
        if (data == NULL) {exit(-1);}
    }
    if(globalReturnsTrueOrFalse())
    {
        free(data);
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
    if(globalReturnsTrueOrFalse())
    {
        data = new int64_t;
    }
    else
    {
        data = new int64_t;
    }
    if(globalReturnsTrueOrFalse())
    {
        delete data;
    }
    else
    {
        delete data;
    }
}
} 
