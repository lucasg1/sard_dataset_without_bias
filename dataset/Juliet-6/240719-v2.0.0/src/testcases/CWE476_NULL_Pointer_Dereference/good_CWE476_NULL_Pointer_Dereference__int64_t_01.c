void FUN0()
{
    int64_t * data;
    int64_t tmpData = 5LL;
    {
        data = &tmpData;
    }
    printLongLongLine(*data);
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    if (data != NULL)
    {
        printLongLongLine(*data);
    }
    else
    {
        printLine("data is NULL");
    }
}
