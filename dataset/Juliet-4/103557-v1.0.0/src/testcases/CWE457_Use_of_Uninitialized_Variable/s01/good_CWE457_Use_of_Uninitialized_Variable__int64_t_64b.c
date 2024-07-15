void FUN0(void * dataVoidPtr);
void FUN1()
{
    int64_t data;
    data = 5LL;
    FUN0(&data);
}
void FUN2(void * dataVoidPtr);
void FUN3()
{
    int64_t data;
    ; 
    FUN2(&data);
}
void FUN0(void * dataVoidPtr)
{
    int64_t * dataPtr = (int64_t *)dataVoidPtr;
    int64_t data = (*dataPtr);
    printLongLongLine(data);
}
void FUN2(void * dataVoidPtr)
{
    int64_t * dataPtr = (int64_t *)dataVoidPtr;
    int64_t data = (*dataPtr);
    data = 5LL;
    printLongLongLine(data);
}
