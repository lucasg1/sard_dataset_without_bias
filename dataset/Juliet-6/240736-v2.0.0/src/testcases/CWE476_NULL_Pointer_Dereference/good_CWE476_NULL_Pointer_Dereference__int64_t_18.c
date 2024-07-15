void FUN0()
{
    int64_t * data;
    goto source;
source:
    data = NULL;
    goto sink;
sink:
    if (data != NULL)
    {
        printLongLongLine(*data);
    }
    else
    {
        printLine("data is NULL");
    }
}
void FUN1()
{
    int64_t * data;
    int64_t tmpData = 5LL;
    goto source;
source:
    {
        data = &tmpData;
    }
    goto sink;
sink:
    printLongLongLine(*data);
}
