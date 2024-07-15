namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(globalFive==5)
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
    }
    if(globalFive!=5)
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
    if(globalFive==5)
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
    }
    if(globalFive==5)
    {
        free(data);
    }
}
void FUN2()
{
    long * data;
    data = NULL;
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new long;
    }
    if(globalFive==5)
    {
        delete data;
    }
}
void FUN3()
{
    long * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new long;
    }
    if(globalFive==5)
    {
        delete data;
    }
}
} 
