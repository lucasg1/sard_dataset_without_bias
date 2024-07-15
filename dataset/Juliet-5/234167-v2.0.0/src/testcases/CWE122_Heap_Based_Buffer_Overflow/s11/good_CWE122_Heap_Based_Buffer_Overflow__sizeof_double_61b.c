double * FUN0(double * data);
void FUN1()
{
    double * data;
    data = NULL;
    data = FUN0(data);
    printDoubleLine(*data);
    free(data);
}
double * FUN0(double * data)
{
    data = (double *)malloc(sizeof(*data));
    if (data == NULL) {exit(-1);}
    *data = 1.7E300;
    return data;
}
