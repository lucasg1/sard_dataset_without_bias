void FUN0(int * dataPtr);
void FUN1()
{
    int data;
    data = 0;
    data = INT_MIN;
    FUN0(&data);
}
void FUN0(int * dataPtr)
{
    int data = *dataPtr;
    {
<START>
        int result = data - 1;
<END>
        printIntLine(result);
    }
}
