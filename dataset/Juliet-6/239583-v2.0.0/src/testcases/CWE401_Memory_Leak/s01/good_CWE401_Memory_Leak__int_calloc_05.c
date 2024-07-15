static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    int * data;
    data = NULL;
    if(staticTrue)
    {
        data = (int *)calloc(100, sizeof(int));
        if (data == NULL) {exit(-1);}
        data[0] = 5;
        printIntLine(data[0]);
    }
    if(staticFalse)
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
    if(staticTrue)
    {
        data = (int *)calloc(100, sizeof(int));
        if (data == NULL) {exit(-1);}
        data[0] = 5;
        printIntLine(data[0]);
    }
    if(staticTrue)
    {
        free(data);
    }
}
void FUN2()
{
    int * data;
    data = NULL;
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (int *)ALLOCA(100*sizeof(int));
        data[0] = 5;
        printIntLine(data[0]);
    }
    if(staticTrue)
    {
        ; 
    }
}
void FUN3()
{
    int * data;
    data = NULL;
    if(staticTrue)
    {
        data = (int *)ALLOCA(100*sizeof(int));
        data[0] = 5;
        printIntLine(data[0]);
    }
    if(staticTrue)
    {
        ; 
    }
}
