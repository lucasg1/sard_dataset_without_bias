void FUN0(int64_t * dataArray[]);
void FUN1()
{
    int64_t * data;
    int64_t * dataArray[5];
    data = NULL;
    data = (int64_t *)malloc(100*sizeof(int64_t));
    data[0] = 5LL;
    printLongLongLine(data[0]);
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN0(int64_t * dataArray[])
{
    int64_t * data = dataArray[2];
<START>
<END>
    ; 
}
