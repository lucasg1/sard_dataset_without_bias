void FUN0(int * * dataPtr);
void FUN1()
{
    int * data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    data[0] = 5;
    printIntLine(data[0]);
    FUN0(&data);
}
void FUN0(int * * dataPtr)
{
    int * data = *dataPtr;
<START>
<END>
    ; 
}
