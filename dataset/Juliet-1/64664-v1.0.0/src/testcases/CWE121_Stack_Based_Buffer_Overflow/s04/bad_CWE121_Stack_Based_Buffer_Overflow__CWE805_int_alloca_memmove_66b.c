void FUN0(int * dataArray[]);
void FUN1()
{
    int * data;
    int * dataArray[5];
    int * VAR0 = (int *)ALLOCA(50*sizeof(int));
    int * VAR1 = (int *)ALLOCA(100*sizeof(int));
    data = VAR0;
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN0(int * dataArray[])
{
    int * data = dataArray[2];
    {
        int source[100] = {0}; 
<START>
        memmove(data, source, 100*sizeof(int));
<END>
        printIntLine(data[0]);
    }
}
