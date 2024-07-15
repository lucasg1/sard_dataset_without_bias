void FUN0(int * dataPtr);
void FUN1()
{
    int data;
    data = -1;
    data = 0;
    FUN0(&data);
}
void FUN0(int * dataPtr)
{
    int data = *dataPtr;
<START>
    printIntLine(100 % data);
<END>
}
