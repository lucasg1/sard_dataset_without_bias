void FUN0(void * dataVoidPtr);
void FUN1()
{
    int * data;
    data = NULL;
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    int * * dataPtr = (int * *)dataVoidPtr;
    int * data = (*dataPtr);
<START>
    printIntLine(*data);
<END>
}
