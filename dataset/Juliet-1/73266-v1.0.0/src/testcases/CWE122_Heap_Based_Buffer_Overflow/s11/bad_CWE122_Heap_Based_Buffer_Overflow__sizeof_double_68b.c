double * VAR0;
double * VAR1;
void FUN0();
void FUN1()
{
    double * data;
    data = NULL;
    data = (double *)malloc(sizeof(data));
    *data = 1.7E300;
    VAR0 = data;
    FUN0();
}
extern double * VAR0;
extern double * VAR1;
void FUN0()
{
    double * data = VAR0;
<START>
    printDoubleLine(*data);
<END>
    free(data);
}
