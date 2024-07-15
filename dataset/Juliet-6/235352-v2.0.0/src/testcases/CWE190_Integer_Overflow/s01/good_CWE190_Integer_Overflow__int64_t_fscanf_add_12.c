void FUN0()
{
    int64_t data;
    data = 0LL;
    if(globalReturnsTrueOrFalse())
    {
        fscanf (stdin, "%" SCNd64, &data);
    }
    else
    {
        fscanf (stdin, "%" SCNd64, &data);
    }
    if(globalReturnsTrueOrFalse())
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
            int64_t result = data + 1;
            printLongLongLine(result);
        }
    }
    else
    {
        {
            int64_t result = data + 1;
            printLongLongLine(result);
        }
    }
}
