void FUN0(void * dataVoidPtr);
void FUN1()
{
    int64_t data;
    data = 0LL;
    data = (int64_t)RAND64();
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    int64_t * dataPtr = (int64_t *)dataVoidPtr;
    int64_t data = (*dataPtr);
    {
<START>
        data--;
<END>
        int64_t result = data;
        printLongLongLine(result);
    }
}
