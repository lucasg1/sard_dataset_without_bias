void FUN0()
{
    int64_t * data;
    if(globalReturnsTrue())
    {
        data = NULL;
    }
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (data != NULL)
        {
            printLongLongLine(*data);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}
void FUN1()
{
    int64_t * data;
    if(globalReturnsTrue())
    {
        data = NULL;
    }
    if(globalReturnsTrue())
    {
        if (data != NULL)
        {
            printLongLongLine(*data);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}
void FUN2()
{
    int64_t * data;
    int64_t tmpData = 5LL;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            data = &tmpData;
        }
    }
    if(globalReturnsTrue())
    {
        printLongLongLine(*data);
    }
}
void FUN3()
{
    int64_t * data;
    int64_t tmpData = 5LL;
    if(globalReturnsTrue())
    {
        {
            data = &tmpData;
        }
    }
    if(globalReturnsTrue())
    {
        printLongLongLine(*data);
    }
}
