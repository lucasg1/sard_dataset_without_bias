namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(1)
    {
        data = (int *)malloc(100*sizeof(int));
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
    int * data;
    data = NULL;
    if(1)
    {
        data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
    }
    if(1)
    {
        free(data);
    }
}
void FUN2()
{
    int * data;
    data = NULL;
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new int;
    }
    if(1)
    {
        delete data;
    }
}
void FUN3()
{
    int * data;
    data = NULL;
    if(1)
    {
        data = new int;
    }
    if(1)
    {
        delete data;
    }
}
} 
