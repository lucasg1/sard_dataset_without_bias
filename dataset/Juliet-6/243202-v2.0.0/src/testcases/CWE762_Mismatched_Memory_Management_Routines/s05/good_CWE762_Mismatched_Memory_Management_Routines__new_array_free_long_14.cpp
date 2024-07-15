namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new long[100];
    }
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        delete [] data;
    }
}
void FUN1()
{
    long * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new long[100];
    }
    if(globalFive==5)
    {
        delete [] data;
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
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
    }
    if(globalFive==5)
    {
        free(data);
    }
}
void FUN3()
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
} 
