void FUN0()
{
    int64_t * data;
    int64_t tmpData = 5LL;
    int64_t * *dataPtr1 = &data;
    int64_t * *dataPtr2 = &data;
    {
        int64_t * data = *dataPtr1;
        {
            data = &tmpData;
        }
        *dataPtr1 = data;
    }
    {
        int64_t * data = *dataPtr2;
        printLongLongLine(*data);
    }
}
void FUN1()
{
    int64_t * data;
    int64_t * *dataPtr1 = &data;
    int64_t * *dataPtr2 = &data;
    {
        int64_t * data = *dataPtr1;
        data = NULL;
        *dataPtr1 = data;
    }
    {
        int64_t * data = *dataPtr2;
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
