void FUN0(double * data);
void FUN1(double * data)
{
    FUN0(data);
}
void FUN1(double * data);
void FUN3()
{
    double * data;
    data = NULL;
    data = (double *)malloc(sizeof(*data));
    *data = 1.7E300;
    FUN1(data);
}
void FUN0(double * data)
{
    printDoubleLine(*data);
    free(data);
}
