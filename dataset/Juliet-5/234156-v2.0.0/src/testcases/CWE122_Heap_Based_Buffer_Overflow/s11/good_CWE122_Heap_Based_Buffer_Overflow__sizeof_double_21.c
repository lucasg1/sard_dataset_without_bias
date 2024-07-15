static int VAR0 = 0;
static int VAR1 = 0;
static double * FUN0(double * data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (double *)malloc(sizeof(*data));
        if (data == NULL) {exit(-1);}
        *data = 1.7E300;
    }
    return data;
}
void FUN1()
{
    double * data;
    data = NULL;
    VAR0 = 0; 
    data = FUN0(data);
    printDoubleLine(*data);
    free(data);
}
static double * FUN2(double * data)
{
    if(VAR1)
    {
        data = (double *)malloc(sizeof(*data));
        if (data == NULL) {exit(-1);}
        *data = 1.7E300;
    }
    return data;
}
void FUN3()
{
    double * data;
    data = NULL;
    VAR1 = 1; 
    data = FUN2(data);
    printDoubleLine(*data);
    free(data);
}
