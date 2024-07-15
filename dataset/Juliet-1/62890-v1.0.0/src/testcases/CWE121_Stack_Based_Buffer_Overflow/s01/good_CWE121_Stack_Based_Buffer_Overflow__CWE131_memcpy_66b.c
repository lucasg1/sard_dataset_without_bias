void FUN0(int * dataArray[]);
void FUN1()
{
    int * data;
    int * dataArray[5];
    data = NULL;
    data = (int *)ALLOCA(10*sizeof(int));
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN0(int * dataArray[])
{
    int * data = dataArray[2];
    {
        int source[10] = {0};
        memcpy(data, source, 10*sizeof(int));
        printIntLine(data[0]);
    }
}
