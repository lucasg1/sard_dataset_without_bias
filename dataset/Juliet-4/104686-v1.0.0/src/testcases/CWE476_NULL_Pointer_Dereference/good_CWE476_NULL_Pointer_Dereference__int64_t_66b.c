void FUN0(int64_t * dataArray[]);
void FUN1()
{
    int64_t * data;
    int64_t * dataArray[5];
    {
        int64_t tmpData = 5LL;
        data = &tmpData;
    }
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN2(int64_t * dataArray[]);
void FUN3()
{
    int64_t * data;
    int64_t * dataArray[5];
    data = NULL;
    dataArray[2] = data;
    FUN2(dataArray);
}
void FUN0(int64_t * dataArray[])
{
    int64_t * data = dataArray[2];
    printLongLongLine(*data);
}
void FUN2(int64_t * dataArray[])
{
    int64_t * data = dataArray[2];
    if (data != NULL)
    {
        printLongLongLine(*data);
    }
    else
    {
        printLine("data is NULL");
    }
}
