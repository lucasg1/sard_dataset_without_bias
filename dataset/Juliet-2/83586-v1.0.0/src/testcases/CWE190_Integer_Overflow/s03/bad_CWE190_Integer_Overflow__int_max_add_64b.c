void FUN0(void * dataVoidPtr);
void FUN1()
{
    int data;
    data = 0;
    data = INT_MAX;
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    int * dataPtr = (int *)dataVoidPtr;
    int data = (*dataPtr);
    {
<START>
        int result = data + 1;
<END>
        printIntLine(result);
    }
}
