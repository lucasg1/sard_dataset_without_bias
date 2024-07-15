void FUN0()
{
    int64_t data;
    data = 0LL;
    data = 2;
    {
        data++;
        int64_t result = data;
        printLongLongLine(result);
    }
}
void FUN1()
{
    int64_t data;
    data = 0LL;
    fscanf (stdin, "%" SCNd64, &data);
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
