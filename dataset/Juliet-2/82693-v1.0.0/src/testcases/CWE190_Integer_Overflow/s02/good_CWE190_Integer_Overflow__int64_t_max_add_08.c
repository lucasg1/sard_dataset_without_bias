static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    int64_t data;
    data = 0LL;
    if(FUN0())
    {
        data = LLONG_MAX;
    }
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
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
void FUN3()
{
    int64_t data;
    data = 0LL;
    if(FUN0())
    {
        data = LLONG_MAX;
    }
    if(FUN0())
    {
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
void FUN4()
{
    int64_t data;
    data = 0LL;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 2;
    }
    if(FUN0())
    {
        {
            int64_t result = data + 1;
            printLongLongLine(result);
        }
    }
}
void FUN5()
{
    int64_t data;
    data = 0LL;
    if(FUN0())
    {
        data = 2;
    }
    if(FUN0())
    {
        {
            int64_t result = data + 1;
            printLongLongLine(result);
        }
    }
}
