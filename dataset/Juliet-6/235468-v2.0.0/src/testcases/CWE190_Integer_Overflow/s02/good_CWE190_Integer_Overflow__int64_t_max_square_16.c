void FUN0()
{
    int64_t data;
    data = 0LL;
    while(1)
    {
        data = LLONG_MAX;
        break;
    }
    while(1)
    {
        if (imaxabs((intmax_t)data) <= sqrtl(LLONG_MAX))
        {
            int64_t result = data * data;
            printLongLongLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
        break;
    }
}
void FUN1()
{
    int64_t data;
    data = 0LL;
    while(1)
    {
        data = 2;
        break;
    }
    while(1)
    {
        {
            int64_t result = data * data;
            printLongLongLine(result);
        }
        break;
    }
}
