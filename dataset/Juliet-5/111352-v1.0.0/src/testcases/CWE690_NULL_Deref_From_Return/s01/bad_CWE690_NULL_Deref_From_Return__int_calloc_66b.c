void FUN0(int * dataArray[]);
void FUN1()
{
    int * data;
    int * dataArray[5];
    data = NULL; 
    data = (int *)calloc(1, sizeof(int));
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN0(int * dataArray[])
{
    int * data = dataArray[2];
<START>
    data[0] = 5;
<END>
    printIntLine(data[0]);
    free(data);
}
