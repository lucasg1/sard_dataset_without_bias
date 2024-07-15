void FUN0(void * dataVoidPtr);
void FUN1()
{
    int data;
    data = 0;
    fscanf(stdin, "%d", &data);
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    int * dataPtr = (int *)dataVoidPtr;
    int data = (*dataPtr);
    {
<START>
        data--;
<END>
        int result = data;
        printIntLine(result);
    }
}
