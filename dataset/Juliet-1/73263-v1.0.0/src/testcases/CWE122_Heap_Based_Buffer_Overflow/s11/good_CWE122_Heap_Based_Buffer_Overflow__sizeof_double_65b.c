void FUN0(double * data);
void FUN1()
{
    double * data;
    void (*funcPtr) (double *) = FUN0;
    data = NULL;
    data = (double *)malloc(sizeof(*data));
    *data = 1.7E300;
    funcPtr(data);
}
void FUN0(double * data)
{
    printDoubleLine(*data);
    free(data);
}
