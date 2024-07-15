void FUN0()
{
    long * data;
    data = NULL;
    if(5==5)
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
        free(data);
    }
    if(5!=5)
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
    if(5==5)
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
        free(data);
    }
    if(5==5)
    {
        ; 
    }
}
void FUN2()
{
    long * data;
    data = NULL;
    if(5!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
    }
    if(5==5)
    {
        free(data);
    }
}
void FUN3()
{
    long * data;
    data = NULL;
    if(5==5)
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
    }
    if(5==5)
    {
        free(data);
    }
}
