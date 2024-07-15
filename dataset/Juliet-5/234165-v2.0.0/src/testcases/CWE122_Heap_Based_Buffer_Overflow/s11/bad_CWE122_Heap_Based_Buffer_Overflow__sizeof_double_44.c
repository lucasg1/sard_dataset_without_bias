void FUN0(double * data)
{
    printDoubleLine(*data);
    free(data);
}
void FUN1()
{
    double * data;
    void (*funcPtr) (double *) = FUN0;
    data = NULL;
    data = (double *)malloc(sizeof(data));
    if (data == NULL) {exit(-1);}
<START>
    *data = 1.7E300;
<END>
    funcPtr(data);
}
