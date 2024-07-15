void FUN0(void * dataVoidPtr);
void FUN1()
{
    int64_t data;
    data = 0LL;
    data = 2;
    FUN0(&data);
}
void FUN2(void * dataVoidPtr);
void FUN3()
{
    int64_t data;
    data = 0LL;
    fscanf (stdin, "%" SCNd64, &data);
    FUN2(&data);
}
void FUN0(void * dataVoidPtr)
{
    int64_t * dataPtr = (int64_t *)dataVoidPtr;
    int64_t data = (*dataPtr);
    {
        int64_t result = data * data;
        printLongLongLine(result);
    }
}
void FUN2(void * dataVoidPtr)
{
    int64_t * dataPtr = (int64_t *)dataVoidPtr;
    int64_t data = (*dataPtr);
    if (imaxabs((intmax_t)data) <= sqrtl(LLONG_MAX))
    {
        int64_t result = data * data;
        printLongLongLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
