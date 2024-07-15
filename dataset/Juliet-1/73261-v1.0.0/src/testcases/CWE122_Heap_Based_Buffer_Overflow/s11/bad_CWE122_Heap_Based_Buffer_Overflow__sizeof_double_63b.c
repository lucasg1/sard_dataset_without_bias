void FUN0(double * * dataPtr);
void FUN1()
{
    double * data;
    data = NULL;
    data = (double *)malloc(sizeof(data));
    *data = 1.7E300;
    FUN0(&data);
}
void FUN0(double * * dataPtr)
{
    double * data = *dataPtr;
<START>
    printDoubleLine(*data);
<END>
    free(data);
}
