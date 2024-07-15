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
    if(5==5)
    {
        data = (int64_t)RAND64();
    }
    if(5==5)
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
    if(5!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 2;
    }
    if(5==5)
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
    if(5==5)
    {
        data = 2;
    }
    if(5==5)
    {
        if(data > 0) 
        {
            int64_t result = data * 2;
            printLongLongLine(result);
        }
    }
}
