static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    int * data;
    data = NULL;
    if(FUN0())
    {
        data = (int *)calloc(100, sizeof(int));
        if (data == NULL) {exit(-1);}
        data[0] = 5;
        printIntLine(data[0]);
    }
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        free(data);
    }
}
void FUN3()
{
    int * data;
    data = NULL;
    if(FUN0())
    {
        data = (int *)calloc(100, sizeof(int));
        if (data == NULL) {exit(-1);}
        data[0] = 5;
        printIntLine(data[0]);
    }
    if(FUN0())
    {
        free(data);
    }
}
void FUN4()
{
    int * data;
    data = NULL;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (int *)ALLOCA(100*sizeof(int));
        data[0] = 5;
        printIntLine(data[0]);
    }
    if(FUN0())
    {
        ; 
    }
}
void FUN5()
{
    int * data;
    data = NULL;
    if(FUN0())
    {
        data = (int *)ALLOCA(100*sizeof(int));
        data[0] = 5;
        printIntLine(data[0]);
    }
    if(FUN0())
    {
        ; 
    }
}
