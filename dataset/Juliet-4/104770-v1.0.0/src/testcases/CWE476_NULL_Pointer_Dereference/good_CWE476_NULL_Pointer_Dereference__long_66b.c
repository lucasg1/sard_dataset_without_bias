void FUN0(long * dataArray[]);
void FUN1()
{
    long * data;
    long * dataArray[5];
    {
        long tmpData = 5L;
        data = &tmpData;
    }
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN2(long * dataArray[]);
void FUN3()
{
    long * data;
    long * dataArray[5];
    data = NULL;
    dataArray[2] = data;
    FUN2(dataArray);
}
void FUN0(long * dataArray[])
{
    long * data = dataArray[2];
    printLongLine(*data);
}
void FUN2(long * dataArray[])
{
    long * data = dataArray[2];
    if (data != NULL)
    {
        printLongLine(*data);
    }
    else
    {
        printLine("data is NULL");
    }
}
