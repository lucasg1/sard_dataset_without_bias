void FUN0()
{
    long * data;
    long tmpData = 5L;
    long * *dataPtr1 = &data;
    long * *dataPtr2 = &data;
    {
        long * data = *dataPtr1;
        {
            data = &tmpData;
        }
        *dataPtr1 = data;
    }
    {
        long * data = *dataPtr2;
        printLongLine(*data);
    }
}
void FUN1()
{
    long * data;
    long * *dataPtr1 = &data;
    long * *dataPtr2 = &data;
    {
        long * data = *dataPtr1;
        data = NULL;
        *dataPtr1 = data;
    }
    {
        long * data = *dataPtr2;
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
