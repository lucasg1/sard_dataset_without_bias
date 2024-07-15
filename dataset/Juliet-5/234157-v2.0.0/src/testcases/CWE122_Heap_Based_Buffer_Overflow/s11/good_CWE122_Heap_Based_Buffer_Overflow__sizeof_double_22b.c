int VAR0 = 0;
int VAR1 = 0;
double * FUN0(double * data);
void FUN1()
{
    double * data;
    data = NULL;
    VAR0 = 0; 
    data = FUN0(data);
    printDoubleLine(*data);
    free(data);
}
double * FUN2(double * data);
void FUN3()
{
    double * data;
    data = NULL;
    VAR1 = 1; 
    data = FUN2(data);
    printDoubleLine(*data);
    free(data);
}
extern int VAR0;
extern int VAR1;
double * FUN0(double * data)
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
double * FUN2(double * data)
{
    if(VAR1)
    {
        data = (double *)malloc(sizeof(*data));
        if (data == NULL) {exit(-1);}
        *data = 1.7E300;
    }
    return data;
}
