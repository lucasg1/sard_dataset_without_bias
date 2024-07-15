void FUN0(double * data);
void FUN1()
{
    double * data;
    data = NULL;
    data = (double *)malloc(sizeof(*data));
    *data = 1.7E300;
    FUN0(data);
}
void FUN3(double * data);
void FUN0(double * data)
{
    FUN3(data);
}
void FUN5(double * data);
void FUN3(double * data)
{
    FUN5(data);
}
void FUN5(double * data)
{
    printDoubleLine(*data);
    free(data);
}
