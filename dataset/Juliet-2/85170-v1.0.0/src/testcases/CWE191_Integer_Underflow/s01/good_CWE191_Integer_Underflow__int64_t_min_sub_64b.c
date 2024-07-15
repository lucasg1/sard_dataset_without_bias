void FUN0(void * dataVoidPtr);
void FUN1()
{
    int64_t data;
    data = 0LL;
    data = -2;
    FUN0(&data);
}
void FUN2(void * dataVoidPtr);
void FUN3()
{
    int64_t data;
    data = 0LL;
    data = LLONG_MIN;
    FUN2(&data);
}
void FUN0(void * dataVoidPtr)
{
    int64_t * dataPtr = (int64_t *)dataVoidPtr;
    int64_t data = (*dataPtr);
    {
        int64_t result = data - 1;
        printLongLongLine(result);
    }
}
void FUN2(void * dataVoidPtr)
{
    int64_t * dataPtr = (int64_t *)dataVoidPtr;
    int64_t data = (*dataPtr);
    if (data > LLONG_MIN)
    {
        int64_t result = data - 1;
        printLongLongLine(result);
    }
    else
    {
        printLine("data value is too large to perform subtraction.");
    }
}
