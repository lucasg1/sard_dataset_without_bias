static double * VAR0;
static double * VAR1;
void FUN0()
{
    double * data = VAR1;
    printDoubleLine(*data);
    free(data);
}
void FUN1()
{
    double * data;
    data = NULL;
    data = (double *)malloc(sizeof(*data));
    if (data == NULL) {exit(-1);}
    *data = 1.7E300;
    VAR1 = data;
    FUN0();
}
