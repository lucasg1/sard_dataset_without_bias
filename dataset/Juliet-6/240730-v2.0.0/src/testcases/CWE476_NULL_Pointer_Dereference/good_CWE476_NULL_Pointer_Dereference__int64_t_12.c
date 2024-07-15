void FUN0()
{
    int64_t * data;
    if(globalReturnsTrueOrFalse())
    {
        data = NULL;
    }
    else
    {
        data = NULL;
    }
    if(globalReturnsTrueOrFalse())
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
    int64_t tmpData = 5LL;
    if(globalReturnsTrueOrFalse())
    {
        {
            data = &tmpData;
        }
    }
    else
    {
        {
            data = &tmpData;
        }
    }
    if(globalReturnsTrueOrFalse())
    {
        printLongLongLine(*data);
    }
    else
    {
        printLongLongLine(*data);
    }
}
