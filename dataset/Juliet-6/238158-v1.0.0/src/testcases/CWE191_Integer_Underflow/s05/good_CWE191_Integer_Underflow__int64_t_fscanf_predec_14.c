void FUN0()
{
    int64_t data;
    data = 0LL;
    if(globalFive==5)
    {
        fscanf (stdin, "%" SCNd64, &data);
    }
    if(globalFive!=5)
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
    if(globalFive==5)
    {
        fscanf (stdin, "%" SCNd64, &data);
    }
    if(globalFive==5)
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
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = -2;
    }
    if(globalFive==5)
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
    if(globalFive==5)
    {
        data = -2;
    }
    if(globalFive==5)
    {
        {
            --data;
            int64_t result = data;
            printLongLongLine(result);
        }
    }
}
