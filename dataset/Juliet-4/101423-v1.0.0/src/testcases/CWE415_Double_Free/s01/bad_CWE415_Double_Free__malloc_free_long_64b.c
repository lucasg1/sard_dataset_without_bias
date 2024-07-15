void FUN0(void * dataVoidPtr);
void FUN1()
{
    long * data;
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
    free(data);
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    long * * dataPtr = (long * *)dataVoidPtr;
    long * data = (*dataPtr);
<START>
    free(data);
<END>
}
