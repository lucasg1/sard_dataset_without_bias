void FUN0()
{
    int64_t data;
    data = 0LL;
    if(globalReturnsTrueOrFalse())
    {
        data = LLONG_MIN;
    }
    else
    {
        data = LLONG_MIN;
    }
    if(globalReturnsTrueOrFalse())
    {
        if (data > LLONG_MIN)
        {
            data--;
            int64_t result = data;
            printLongLongLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
    else
    {
        if (data > LLONG_MIN)
        {
            data--;
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
    if(globalReturnsTrueOrFalse())
    {
        data = -2;
    }
    else
    {
        data = -2;
    }
    if(globalReturnsTrueOrFalse())
    {
        {
            data--;
            int64_t result = data;
            printLongLongLine(result);
        }
    }
    else
    {
        {
            data--;
            int64_t result = data;
            printLongLongLine(result);
        }
    }
}
