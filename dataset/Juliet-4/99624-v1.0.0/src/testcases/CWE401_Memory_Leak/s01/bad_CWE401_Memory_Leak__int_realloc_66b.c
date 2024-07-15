void FUN0(int * dataArray[]);
void FUN1()
{
    int * data;
    int * dataArray[5];
    data = NULL;
    data = (int *)realloc(data, 100*sizeof(int));
    data[0] = 5;
    printIntLine(data[0]);
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN0(int * dataArray[])
{
    int * data = dataArray[2];
<START>
<END>
    ; 
}
