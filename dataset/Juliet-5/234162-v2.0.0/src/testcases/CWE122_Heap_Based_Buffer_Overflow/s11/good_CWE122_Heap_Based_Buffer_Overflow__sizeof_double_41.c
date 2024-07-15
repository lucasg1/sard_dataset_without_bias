void FUN0(double * data)
{
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
    FUN0(data);
}
