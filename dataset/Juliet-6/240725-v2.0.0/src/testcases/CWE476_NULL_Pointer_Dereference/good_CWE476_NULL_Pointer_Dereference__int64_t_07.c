static int staticFive = 5;
void FUN0()
{
    int64_t * data;
    if(staticFive==5)
    {
        data = NULL;
    }
    if(staticFive!=5)
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
    if(staticFive==5)
    {
        data = NULL;
    }
    if(staticFive==5)
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
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            data = &tmpData;
        }
    }
    if(staticFive==5)
    {
        printLongLongLine(*data);
    }
}
void FUN3()
{
    int64_t * data;
    int64_t tmpData = 5LL;
    if(staticFive==5)
    {
        {
            data = &tmpData;
        }
    }
    if(staticFive==5)
    {
        printLongLongLine(*data);
    }
}
