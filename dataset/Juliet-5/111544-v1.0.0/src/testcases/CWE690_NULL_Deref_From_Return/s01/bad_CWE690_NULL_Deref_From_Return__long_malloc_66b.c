void FUN0(long * dataArray[]);
void FUN1()
{
    long * data;
    long * dataArray[5];
    data = NULL; 
    data = (long *)malloc(1*sizeof(long));
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN0(long * dataArray[])
{
    long * data = dataArray[2];
<START>
    data[0] = 5L;
<END>
    printLongLine(data[0]);
    free(data);
}
