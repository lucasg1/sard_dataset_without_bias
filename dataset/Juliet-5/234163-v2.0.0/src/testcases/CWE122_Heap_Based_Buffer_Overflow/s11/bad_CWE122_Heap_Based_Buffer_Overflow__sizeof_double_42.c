static double * FUN0(double * data)
{
    data = (double *)malloc(sizeof(data));
    if (data == NULL) {exit(-1);}
    *data = 1.7E300;
    return data;
}
void FUN1()
{
    double * data;
    data = NULL;
    data = FUN0(data);
<START>
    printDoubleLine(*data);
<END>
    free(data);
}
