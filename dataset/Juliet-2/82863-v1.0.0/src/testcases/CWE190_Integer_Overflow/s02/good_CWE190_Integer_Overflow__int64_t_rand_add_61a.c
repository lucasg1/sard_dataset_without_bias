int64_t FUN0(int64_t data)
{
    data = 2;
    return data;
}
int64_t FUN1(int64_t data)
{
    data = (int64_t)RAND64();
    return data;
}
int64_t FUN0(int64_t data);
void FUN3()
{
    int64_t data;
    data = 0LL;
    data = FUN0(data);
    {
        int64_t result = data + 1;
        printLongLongLine(result);
    }
}
int64_t FUN1(int64_t data);
void FUN5()
{
    int64_t data;
    data = 0LL;
    data = FUN1(data);
    if (data < LLONG_MAX)
    {
        int64_t result = data + 1;
        printLongLongLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
