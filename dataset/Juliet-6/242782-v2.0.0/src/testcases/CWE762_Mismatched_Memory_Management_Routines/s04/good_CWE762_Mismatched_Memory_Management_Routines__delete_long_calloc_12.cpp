namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = (long *)calloc(100, sizeof(long));
        if (data == NULL) {exit(-1);}
    }
    else
    {
        data = (long *)calloc(100, sizeof(long));
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
    long * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = new long;
    }
    else
    {
        data = new long;
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
