void FUN0()
{
    int64_t * data;
    if(1)
    {
        data = NULL;
    }
    if(0)
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
    if(1)
    {
        data = NULL;
    }
    if(1)
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
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            data = &tmpData;
        }
    }
    if(1)
    {
        printLongLongLine(*data);
    }
}
void FUN3()
{
    int64_t * data;
    int64_t tmpData = 5LL;
    if(1)
    {
        {
            data = &tmpData;
        }
    }
    if(1)
    {
        printLongLongLine(*data);
    }
}
