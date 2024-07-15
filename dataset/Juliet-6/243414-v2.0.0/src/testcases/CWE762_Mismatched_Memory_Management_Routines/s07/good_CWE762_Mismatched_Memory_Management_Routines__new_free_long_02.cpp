namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(1)
    {
        data = new long;
    }
    if(0)
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
    long * data;
    data = NULL;
    if(1)
    {
        data = new long;
    }
    if(1)
    {
        delete data;
    }
}
void FUN2()
{
    long * data;
    data = NULL;
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
    }
    if(1)
    {
        free(data);
    }
}
void FUN3()
{
    long * data;
    data = NULL;
    if(1)
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
    }
    if(1)
    {
        free(data);
    }
}
} 
