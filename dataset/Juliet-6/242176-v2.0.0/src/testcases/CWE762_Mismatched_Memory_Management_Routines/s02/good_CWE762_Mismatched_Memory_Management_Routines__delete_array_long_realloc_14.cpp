namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(globalFive==5)
    {
        data = NULL;
        data = (long *)realloc(data, 100*sizeof(long));
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
        data = NULL;
        data = (long *)realloc(data, 100*sizeof(long));
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
        data = new long[100];
    }
    if(globalFive==5)
    {
        delete [] data;
    }
}
void FUN3()
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
} 
