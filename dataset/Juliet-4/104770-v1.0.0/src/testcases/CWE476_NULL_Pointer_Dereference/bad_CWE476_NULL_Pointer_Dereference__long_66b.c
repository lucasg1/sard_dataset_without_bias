void FUN0(long * dataArray[]);
void FUN1()
{
    long * data;
    long * dataArray[5];
    data = NULL;
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN0(long * dataArray[])
{
    long * data = dataArray[2];
<START>
    printLongLine(*data);
<END>
}
