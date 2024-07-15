void FUN0(long * * data);
void FUN1()
{
    long * data;
    {
        long tmpData = 5L;
        data = &tmpData;
    }
    FUN0(&data);
}
void FUN2(long * * data);
void FUN3()
{
    long * data;
    data = NULL;
    FUN2(&data);
}
void FUN0(long * * dataPtr)
{
    long * data = *dataPtr;
    printLongLine(*data);
}
void FUN2(long * * dataPtr)
{
    long * data = *dataPtr;
    if (data != NULL)
    {
        printLongLine(*data);
    }
    else
    {
        printLine("data is NULL");
    }
}
