void FUN0(int64_t * data);
void FUN1()
{
    int64_t * data;
    {
        int64_t tmpData = 5LL;
        data = &tmpData;
    }
    FUN0(data);
}
void FUN2(int64_t * data);
void FUN3()
{
    int64_t * data;
    data = NULL;
    FUN2(data);
}
void FUN0(int64_t * data)
{
    printLongLongLine(*data);
}
void FUN2(int64_t * data)
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
