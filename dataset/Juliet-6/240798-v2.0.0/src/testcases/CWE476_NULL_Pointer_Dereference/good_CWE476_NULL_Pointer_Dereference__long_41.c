void FUN0(long * data)
{
    printLongLine(*data);
}
void FUN1()
{
    long * data;
    long tmpData = 5L;
    {
        data = &tmpData;
    }
    FUN0(data);
}
void FUN2(long * data)
{
    if (data != NULL)
    {
        printLongLine(*data);
    }
    else
    {
        printLine("data is NULL");
    }
}
void FUN3()
{
    long * data;
    data = NULL;
    FUN2(data);
}
