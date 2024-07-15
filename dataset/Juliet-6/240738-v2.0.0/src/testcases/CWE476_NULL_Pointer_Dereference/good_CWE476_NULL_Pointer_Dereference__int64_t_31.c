void FUN0()
{
    int64_t * data;
    int64_t tmpData = 5LL;
    {
        data = &tmpData;
    }
    {
        int64_t * dataCopy = data;
        int64_t * data = dataCopy;
        printLongLongLine(*data);
    }
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    {
        int64_t * dataCopy = data;
        int64_t * data = dataCopy;
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
