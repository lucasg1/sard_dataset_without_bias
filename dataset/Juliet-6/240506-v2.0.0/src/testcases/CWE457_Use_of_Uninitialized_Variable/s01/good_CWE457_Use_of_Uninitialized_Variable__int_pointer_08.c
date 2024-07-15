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
    if(FUN0())
    {
        ; 
    }
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (int *)malloc(sizeof(int));
        if (data == NULL) {exit(-1);}
        *data = 5;
        printIntLine(*data);
    }
}
void FUN3()
{
    int * data;
    if(FUN0())
    {
        ; 
    }
    if(FUN0())
    {
        data = (int *)malloc(sizeof(int));
        if (data == NULL) {exit(-1);}
        *data = 5;
        printIntLine(*data);
    }
}
void FUN4()
{
    int * data;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (int *)malloc(sizeof(int));
        if (data == NULL) {exit(-1);}
        *data = 5;
    }
    if(FUN0())
    {
        printIntLine(*data);
    }
}
void FUN5()
{
    int * data;
    if(FUN0())
    {
        data = (int *)malloc(sizeof(int));
        if (data == NULL) {exit(-1);}
        *data = 5;
    }
    if(FUN0())
    {
        printIntLine(*data);
    }
}
