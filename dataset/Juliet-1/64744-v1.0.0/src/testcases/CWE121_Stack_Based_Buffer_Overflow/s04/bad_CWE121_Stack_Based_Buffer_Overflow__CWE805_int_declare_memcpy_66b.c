void FUN0(int * dataArray[]);
void FUN1()
{
    int * data;
    int * dataArray[5];
    int VAR0[50];
    int VAR1[100];
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
        memcpy(data, source, 100*sizeof(int));
<END>
        printIntLine(data[0]);
    }
}
