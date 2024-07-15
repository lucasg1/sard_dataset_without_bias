namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(globalTrue)
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
    }
    if(globalFalse)
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
    if(globalTrue)
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
    }
    if(globalTrue)
    {
        free(data);
    }
}
void FUN2()
{
    long * data;
    data = NULL;
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new long[100];
    }
    if(globalTrue)
    {
        delete [] data;
    }
}
void FUN3()
{
    long * data;
    data = NULL;
    if(globalTrue)
    {
        data = new long[100];
    }
    if(globalTrue)
    {
        delete [] data;
    }
}
} 
