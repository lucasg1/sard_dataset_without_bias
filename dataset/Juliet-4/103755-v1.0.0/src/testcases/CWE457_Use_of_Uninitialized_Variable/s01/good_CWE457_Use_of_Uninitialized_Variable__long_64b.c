void FUN0(void * dataVoidPtr);
void FUN1()
{
    long data;
    data = 5L;
    FUN0(&data);
}
void FUN2(void * dataVoidPtr);
void FUN3()
{
    long data;
    ; 
    FUN2(&data);
}
void FUN0(void * dataVoidPtr)
{
    long * dataPtr = (long *)dataVoidPtr;
    long data = (*dataPtr);
    printLongLine(data);
}
void FUN2(void * dataVoidPtr)
{
    long * dataPtr = (long *)dataVoidPtr;
    long data = (*dataPtr);
    data = 5L;
    printLongLine(data);
}
