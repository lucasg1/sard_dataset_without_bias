void FUN0()
{
    int64_t data;
    data = 0LL;
    if(1)
    {
        data = (int64_t)RAND64();
    }
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
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
void FUN1()
{
    int64_t data;
    data = 0LL;
    if(1)
    {
        data = (int64_t)RAND64();
    }
    if(1)
    {
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
        data = -2;
    }
    if(1)
    {
        {
            --data;
            int64_t result = data;
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
        data = -2;
    }
    if(1)
    {
        {
            --data;
            int64_t result = data;
            printLongLongLine(result);
        }
    }
}
