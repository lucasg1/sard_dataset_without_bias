void FUN0()
{
    int64_t data;
    data = 0LL;
    if(5==5)
    {
        data = (int64_t)RAND64();
    }
    if(5!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (data > LLONG_MIN)
        {
            int64_t result = data - 1;
            printLongLongLine(result);
        }
        else
        {
            printLine("data value is too large to perform subtraction.");
        }
    }
}
void FUN1()
{
    int64_t data;
    data = 0LL;
    if(5==5)
    {
        data = (int64_t)RAND64();
    }
    if(5==5)
    {
        if (data > LLONG_MIN)
        {
            int64_t result = data - 1;
            printLongLongLine(result);
        }
        else
        {
            printLine("data value is too large to perform subtraction.");
        }
    }
}
void FUN2()
{
    int64_t data;
    data = 0LL;
    if(5!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = -2;
    }
    if(5==5)
    {
        {
            int64_t result = data - 1;
            printLongLongLine(result);
        }
    }
}
void FUN3()
{
    int64_t data;
    data = 0LL;
    if(5==5)
    {
        data = -2;
    }
    if(5==5)
    {
        {
            int64_t result = data - 1;
            printLongLongLine(result);
        }
    }
}
