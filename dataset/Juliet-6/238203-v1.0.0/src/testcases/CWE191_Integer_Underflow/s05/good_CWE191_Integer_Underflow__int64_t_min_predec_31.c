void FUN0()
{
    int64_t data;
    data = 0LL;
    data = -2;
    {
        int64_t dataCopy = data;
        int64_t data = dataCopy;
        {
            --data;
            int64_t result = data;
            printLongLongLine(result);
        }
    }
}
void FUN1()
{
    int64_t data;
    data = 0LL;
    data = LLONG_MIN;
    {
        int64_t dataCopy = data;
        int64_t data = dataCopy;
        if (data > LLONG_MIN)
        {
            --data;
            int64_t result = data;
            printLongLongLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
