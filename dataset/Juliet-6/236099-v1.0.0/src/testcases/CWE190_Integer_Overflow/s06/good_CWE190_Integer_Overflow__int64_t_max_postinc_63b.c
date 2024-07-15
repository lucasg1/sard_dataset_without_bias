void FUN0(int64_t * data);
void FUN1()
{
    int64_t data;
    data = 0LL;
    data = 2;
    FUN0(&data);
}
void FUN2(int64_t * data);
void FUN3()
{
    int64_t data;
    data = 0LL;
    data = LLONG_MAX;
    FUN2(&data);
}
void FUN0(int64_t * dataPtr)
{
    int64_t data = *dataPtr;
    {
        data++;
        int64_t result = data;
        printLongLongLine(result);
    }
}
void FUN2(int64_t * dataPtr)
{
    int64_t data = *dataPtr;
    if (data < LLONG_MAX)
    {
        data++;
        int64_t result = data;
        printLongLongLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
