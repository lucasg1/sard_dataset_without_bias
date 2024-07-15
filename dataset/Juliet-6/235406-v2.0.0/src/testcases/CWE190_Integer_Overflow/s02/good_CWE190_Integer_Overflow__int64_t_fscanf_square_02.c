void FUN0()
{
    int64_t data;
    data = 0LL;
    if(1)
    {
        fscanf (stdin, "%" SCNd64, &data);
    }
    if(0)
    {
        printLine("Benign, fixed string");
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
    if(1)
    {
        fscanf (stdin, "%" SCNd64, &data);
    }
    if(1)
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
void FUN2()
{
    int64_t data;
    data = 0LL;
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 2;
    }
    if(1)
    {
        {
            int64_t result = data * data;
            printLongLongLine(result);
        }
    }
}
void FUN3()
{
    int64_t data;
    data = 0LL;
    if(1)
    {
        data = 2;
    }
    if(1)
    {
        {
            int64_t result = data * data;
            printLongLongLine(result);
        }
    }
}
