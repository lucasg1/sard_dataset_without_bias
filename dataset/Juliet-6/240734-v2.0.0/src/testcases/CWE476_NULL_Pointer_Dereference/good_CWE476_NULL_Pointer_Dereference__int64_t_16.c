void FUN0()
{
    int64_t * data;
    while(1)
    {
        data = NULL;
        break;
    }
    while(1)
    {
        if (data != NULL)
        {
            printLongLongLine(*data);
        }
        else
        {
            printLine("data is NULL");
        }
        break;
    }
}
void FUN1()
{
    int64_t * data;
    int64_t tmpData = 5LL;
    while(1)
    {
        {
            data = &tmpData;
        }
        break;
    }
    while(1)
    {
        printLongLongLine(*data);
        break;
    }
}
