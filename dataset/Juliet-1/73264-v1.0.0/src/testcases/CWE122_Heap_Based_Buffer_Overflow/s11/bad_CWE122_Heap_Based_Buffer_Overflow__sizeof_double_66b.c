void FUN0(double * dataArray[]);
void FUN1()
{
    double * data;
    double * dataArray[5];
    data = NULL;
    data = (double *)malloc(sizeof(data));
    *data = 1.7E300;
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN0(double * dataArray[])
{
    double * data = dataArray[2];
<START>
    printDoubleLine(*data);
<END>
    free(data);
}
