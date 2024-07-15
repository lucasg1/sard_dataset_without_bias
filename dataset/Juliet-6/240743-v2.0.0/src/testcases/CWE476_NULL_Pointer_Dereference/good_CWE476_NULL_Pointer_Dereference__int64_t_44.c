void FUN0(int64_t * data)
{
    printLongLongLine(*data);
}
void FUN1()
{
    int64_t * data;
    int64_t tmpData = 5LL;
    void (*funcPtr) (int64_t *) = FUN0;
    {
        data = &tmpData;
    }
    funcPtr(data);
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
void FUN3()
{
    int64_t * data;
    void (*funcPtr) (int64_t *) = FUN2;
    data = NULL;
    funcPtr(data);
}
