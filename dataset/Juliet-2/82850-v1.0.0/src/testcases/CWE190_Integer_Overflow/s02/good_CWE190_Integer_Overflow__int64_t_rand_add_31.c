void FUN0()
{
    int64_t data;
    data = 0LL;
    data = 2;
    {
        int64_t dataCopy = data;
        int64_t data = dataCopy;
        {
            int64_t result = data + 1;
            printLongLongLine(result);
        }
    }
}
void FUN1()
{
    int64_t data;
    data = 0LL;
    data = (int64_t)RAND64();
    {
        int64_t dataCopy = data;
        int64_t data = dataCopy;
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
}