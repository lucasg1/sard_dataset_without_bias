void FUN0()
{
    int64_t data;
    data = 0LL;
    data = 2;
    {
        int64_t result = data * data;
        printLongLongLine(result);
    }
}
void FUN1()
{
    int64_t data;
    data = 0LL;
    fscanf (stdin, "%" SCNd64, &data);
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
