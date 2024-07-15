void FUN0()
{
    long * data;
    long tmpData = 5L;
    {
        data = &tmpData;
    }
    {
        long * dataCopy = data;
        long * data = dataCopy;
        printLongLine(*data);
    }
}
void FUN1()
{
    long * data;
    data = NULL;
    {
        long * dataCopy = data;
        long * data = dataCopy;
        if (data != NULL)
        {
            printLongLine(*data);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}
