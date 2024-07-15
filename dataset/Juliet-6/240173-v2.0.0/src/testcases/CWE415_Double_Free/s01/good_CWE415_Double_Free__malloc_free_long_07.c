static int staticFive = 5;
void FUN0()
{
    long * data;
    data = NULL;
    if(staticFive==5)
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
        free(data);
    }
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ; 
    }
}
void FUN1()
{
    long * data;
    data = NULL;
    if(staticFive==5)
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
        free(data);
    }
    if(staticFive==5)
    {
        ; 
    }
}
void FUN2()
{
    long * data;
    data = NULL;
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
    }
    if(staticFive==5)
    {
        free(data);
    }
}
void FUN3()
{
    long * data;
    data = NULL;
    if(staticFive==5)
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
    }
    if(staticFive==5)
    {
        free(data);
    }
}
