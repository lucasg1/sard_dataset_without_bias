void FUN0(void * dataVoidPtr);
void FUN1()
{
    double * data;
    data = NULL;
    data = (double *)malloc(sizeof(data));
    *data = 1.7E300;
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    double * * dataPtr = (double * *)dataVoidPtr;
    double * data = (*dataPtr);
<START>
    printDoubleLine(*data);
<END>
    free(data);
}
