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
    if(data > 0) 
    {
<START>
        int result = data * 2;
<END>
        printIntLine(result);
    }
}
