static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    int64_t data;
    data = 0LL;
    if(STATIC_CONST_TRUE)
    {
        data = (int64_t)RAND64();
    }
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (imaxabs((intmax_t)data) <= sqrtl(LLONG_MAX))
        {
            int64_t result = data * data;
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
    if(STATIC_CONST_TRUE)
    {
        data = (int64_t)RAND64();
    }
    if(STATIC_CONST_TRUE)
    {
        if (imaxabs((intmax_t)data) <= sqrtl(LLONG_MAX))
        {
            int64_t result = data * data;
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
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 2;
    }
    if(STATIC_CONST_TRUE)
    {
        {
            int64_t result = data * data;
            printLongLongLine(result);
        }
    }
}
void FUN3()
{
    int64_t data;
    data = 0LL;
    if(STATIC_CONST_TRUE)
    {
        data = 2;
    }
    if(STATIC_CONST_TRUE)
    {
        {
            int64_t result = data * data;
            printLongLongLine(result);
        }
    }
}
