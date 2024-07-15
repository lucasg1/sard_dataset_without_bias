void FUN0()
{
    int64_t data;
    data = 0LL;
    if(globalReturnsTrue())
    {
        fscanf (stdin, "%" SCNd64, &data);
    }
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
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
}
void FUN1()
{
    int64_t data;
    data = 0LL;
    if(globalReturnsTrue())
    {
        fscanf (stdin, "%" SCNd64, &data);
    }
    if(globalReturnsTrue())
    {
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
}
void FUN2()
{
    int64_t data;
    data = 0LL;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 2;
    }
    if(globalReturnsTrue())
    {
        {
            data++;
            int64_t result = data;
            printLongLongLine(result);
        }
    }
}
void FUN3()
{
    int64_t data;
    data = 0LL;
    if(globalReturnsTrue())
    {
        data = 2;
    }
    if(globalReturnsTrue())
    {
        {
            data++;
            int64_t result = data;
            printLongLongLine(result);
        }
    }
}
