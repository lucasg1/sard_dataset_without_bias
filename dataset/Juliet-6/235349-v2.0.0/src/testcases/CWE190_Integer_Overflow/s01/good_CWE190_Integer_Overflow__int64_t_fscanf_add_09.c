void FUN0()
{
    int64_t data;
    data = 0LL;
    if(GLOBAL_CONST_TRUE)
    {
        fscanf (stdin, "%" SCNd64, &data);
    }
    if(GLOBAL_CONST_FALSE)
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
void FUN1()
{
    int64_t data;
    data = 0LL;
    if(GLOBAL_CONST_TRUE)
    {
        fscanf (stdin, "%" SCNd64, &data);
    }
    if(GLOBAL_CONST_TRUE)
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
void FUN2()
{
    int64_t data;
    data = 0LL;
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 2;
    }
    if(GLOBAL_CONST_TRUE)
    {
        {
            int64_t result = data + 1;
            printLongLongLine(result);
        }
    }
}
void FUN3()
{
    int64_t data;
    data = 0LL;
    if(GLOBAL_CONST_TRUE)
    {
        data = 2;
    }
    if(GLOBAL_CONST_TRUE)
    {
        {
            int64_t result = data + 1;
            printLongLongLine(result);
        }
    }
}
