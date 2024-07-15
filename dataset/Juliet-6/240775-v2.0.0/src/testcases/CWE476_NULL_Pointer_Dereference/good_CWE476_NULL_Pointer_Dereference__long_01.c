void FUN0()
{
    long * data;
    long tmpData = 5L;
    {
        data = &tmpData;
    }
    printLongLine(*data);
}
void FUN1()
{
    long * data;
    data = NULL;
    if (data != NULL)
    {
        printLongLine(*data);
    }
    else
    {
        printLine("data is NULL");
    }
}
