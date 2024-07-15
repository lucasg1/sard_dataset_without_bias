namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(globalTrue)
    {
        data = new int;
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
    int * data;
    data = NULL;
    if(globalTrue)
    {
        data = new int;
    }
    if(globalTrue)
    {
        delete data;
    }
}
void FUN2()
{
    int * data;
    data = NULL;
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
    }
    if(globalTrue)
    {
        free(data);
    }
}
void FUN3()
{
    int * data;
    data = NULL;
    if(globalTrue)
    {
        data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
    }
    if(globalTrue)
    {
        free(data);
    }
}
} 
