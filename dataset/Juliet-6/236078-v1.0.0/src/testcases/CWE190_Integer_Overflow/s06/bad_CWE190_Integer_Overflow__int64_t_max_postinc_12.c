void FUN0()
{
    int64_t data;
    data = 0LL;
    if(globalReturnsTrueOrFalse())
    {
        data = LLONG_MAX;
    }
    else
    {
        data = 2;
    }
    if(globalReturnsTrueOrFalse())
    {
        {
<START>
            data++;
<END>
            int64_t result = data;
            printLongLongLine(result);
        }
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
