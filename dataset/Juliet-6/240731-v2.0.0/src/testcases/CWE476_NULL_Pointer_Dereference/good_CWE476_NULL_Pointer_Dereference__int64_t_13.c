void FUN0()
{
    int64_t * data;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = NULL;
    }
    if(GLOBAL_CONST_FIVE!=5)
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
    if(GLOBAL_CONST_FIVE==5)
    {
        data = NULL;
    }
    if(GLOBAL_CONST_FIVE==5)
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
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            data = &tmpData;
        }
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        printLongLongLine(*data);
    }
}
void FUN3()
{
    int64_t * data;
    int64_t tmpData = 5LL;
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            data = &tmpData;
        }
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        printLongLongLine(*data);
    }
}
