void FUN0(void * dataVoidPtr);
void FUN1()
{
    long * data;
    data = NULL; 
    data = (long *)calloc(1, sizeof(long));
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    long * * dataPtr = (long * *)dataVoidPtr;
    long * data = (*dataPtr);
<START>
    data[0] = 5L;
<END>
    printLongLine(data[0]);
    free(data);
}
