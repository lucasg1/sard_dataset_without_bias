static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    long * data;
    data = NULL;
    if(staticTrue)
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
        free(data);
    }
    if(staticFalse)
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
    if(staticTrue)
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
        free(data);
    }
    if(staticTrue)
    {
        ; 
    }
}
void FUN2()
{
    long * data;
    data = NULL;
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
    }
    if(staticTrue)
    {
        free(data);
    }
}
void FUN3()
{
    long * data;
    data = NULL;
    if(staticTrue)
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
    }
    if(staticTrue)
    {
        free(data);
    }
}
