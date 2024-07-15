void FUN0(double * data);
void FUN1()
{
    double * data;
    data = NULL;
    data = (double *)malloc(sizeof(*data));
    *data = 1.7E300;
    FUN0(data);
}
void FUN0(double * data)
{
    printDoubleLine(*data);
    free(data);
}
