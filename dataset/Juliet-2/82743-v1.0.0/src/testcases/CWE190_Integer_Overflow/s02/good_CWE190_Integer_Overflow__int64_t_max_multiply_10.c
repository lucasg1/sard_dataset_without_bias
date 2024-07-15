void FUN0()
{
    int64_t data;
    data = 0LL;
    if(globalTrue)
    {
        data = LLONG_MAX;
    }
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if(data > 0) 
        {
            if (data < (LLONG_MAX/2))
            {
                int64_t result = data * 2;
                printLongLongLine(result);
            }
            else
            {
                printLine("data value is too large to perform arithmetic safely.");
            }
        }
    }
}
void FUN1()
{
    int64_t data;
    data = 0LL;
    if(globalTrue)
    {
        data = LLONG_MAX;
    }
    if(globalTrue)
    {
        if(data > 0) 
        {
            if (data < (LLONG_MAX/2))
            {
                int64_t result = data * 2;
                printLongLongLine(result);
            }
            else
            {
                printLine("data value is too large to perform arithmetic safely.");
            }
        }
    }
}
void FUN2()
{
    int64_t data;
    data = 0LL;
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 2;
    }
    if(globalTrue)
    {
        if(data > 0) 
        {
            int64_t result = data * 2;
            printLongLongLine(result);
        }
    }
}
void FUN3()
{
    int64_t data;
    data = 0LL;
    if(globalTrue)
    {
        data = 2;
    }
    if(globalTrue)
    {
        if(data > 0) 
        {
            int64_t result = data * 2;
            printLongLongLine(result);
        }
    }
}
