void FUN0()
{
    int64_t data;
    data = 0LL;
    if(globalReturnsTrueOrFalse())
    {
        data = (int64_t)RAND64();
    }
    else
    {
        data = (int64_t)RAND64();
    }
    if(globalReturnsTrueOrFalse())
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
    }
    else
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
    }
}
void FUN1()
{
    int64_t data;
    data = 0LL;
    if(globalReturnsTrueOrFalse())
    {
        data = 2;
    }
    else
    {
        data = 2;
    }
    if(globalReturnsTrueOrFalse())
    {
        {
            int64_t result = data * data;
            printLongLongLine(result);
        }
    }
    else
    {
        {
            int64_t result = data * data;
            printLongLongLine(result);
        }
    }
}
