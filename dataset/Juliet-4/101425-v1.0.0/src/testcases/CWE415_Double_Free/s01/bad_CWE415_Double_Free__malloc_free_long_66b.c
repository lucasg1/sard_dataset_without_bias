void FUN0(long * dataArray[]);
void FUN1()
{
    long * data;
    long * dataArray[5];
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
    free(data);
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN0(long * dataArray[])
{
    long * data = dataArray[2];
<START>
    free(data);
<END>
}
