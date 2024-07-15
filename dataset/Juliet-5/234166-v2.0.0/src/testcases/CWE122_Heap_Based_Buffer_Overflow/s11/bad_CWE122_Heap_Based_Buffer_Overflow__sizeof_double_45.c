static double * VAR0;
static double * VAR1;
void FUN0()
{
    double * data = VAR0;
    printDoubleLine(*data);
    free(data);
}
void FUN1()
{
    double * data;
    data = NULL;
    data = (double *)malloc(sizeof(data));
    if (data == NULL) {exit(-1);}
<START>
    *data = 1.7E300;
<END>
    VAR0 = data;
    FUN0();
}
