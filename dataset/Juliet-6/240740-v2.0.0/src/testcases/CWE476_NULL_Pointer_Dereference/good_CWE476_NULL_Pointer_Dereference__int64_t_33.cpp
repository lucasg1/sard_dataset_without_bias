namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    int64_t tmpData = 5LL;
    int64_t * &dataRef = data;
    {
        data = &tmpData;
    }
    {
        int64_t * data = dataRef;
        printLongLongLine(*data);
    }
}
void FUN1()
{
    int64_t * data;
    int64_t * &dataRef = data;
    data = NULL;
    {
        int64_t * data = dataRef;
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
} 
