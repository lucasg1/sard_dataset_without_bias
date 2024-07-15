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
    double * data;
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
        data = (double *)malloc(sizeof(double));
        if (data == NULL) {exit(-1);}
        *data = 5.0;
        printDoubleLine(*data);
    }
}
void FUN3()
{
    double * data;
    if(FUN0())
    {
        ; 
    }
    if(FUN0())
    {
        data = (double *)malloc(sizeof(double));
        if (data == NULL) {exit(-1);}
        *data = 5.0;
        printDoubleLine(*data);
    }
}
void FUN4()
{
    double * data;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (double *)malloc(sizeof(double));
        if (data == NULL) {exit(-1);}
        *data = 5.0;
    }
    if(FUN0())
    {
        printDoubleLine(*data);
    }
}
void FUN5()
{
    double * data;
    if(FUN0())
    {
        data = (double *)malloc(sizeof(double));
        if (data == NULL) {exit(-1);}
        *data = 5.0;
    }
    if(FUN0())
    {
        printDoubleLine(*data);
    }
}
