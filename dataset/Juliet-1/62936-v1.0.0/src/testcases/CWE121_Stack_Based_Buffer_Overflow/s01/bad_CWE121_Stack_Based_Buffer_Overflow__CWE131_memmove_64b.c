void FUN0(void * dataVoidPtr);
void FUN1()
{
    int * data;
    data = NULL;
    data = (int *)ALLOCA(10);
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    int * * dataPtr = (int * *)dataVoidPtr;
    int * data = (*dataPtr);
    {
        int source[10] = {0};
<START>
        memmove(data, source, 10*sizeof(int));
<END>
        printIntLine(data[0]);
    }
}
