void FUN0(void * dataVoidPtr);
void FUN1()
{
    long data;
    ; 
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    long * dataPtr = (long *)dataVoidPtr;
    long data = (*dataPtr);
<START>
    printLongLine(data);
<END>
}
