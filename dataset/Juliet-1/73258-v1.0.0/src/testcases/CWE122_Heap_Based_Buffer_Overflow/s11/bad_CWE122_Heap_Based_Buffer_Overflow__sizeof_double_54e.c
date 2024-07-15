void FUN0(double * data);
void FUN1(double * data)
{
    FUN0(data);
}
void FUN2(double * data);
void FUN3()
{
    double * data;
    data = NULL;
    data = (double *)malloc(sizeof(data));
    *data = 1.7E300;
    FUN2(data);
}
void FUN4(double * data);
void FUN0(double * data)
{
    FUN4(data);
}
void FUN1(double * data);
void FUN2(double * data)
{
    FUN1(data);
}
void FUN4(double * data)
{
<START>
    printDoubleLine(*data);
<END>
    free(data);
}
