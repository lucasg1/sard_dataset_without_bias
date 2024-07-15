void FUN0()
{
    long * data;
    while(1)
    {
        data = NULL;
        break;
    }
    while(1)
    {
        if (data != NULL)
        {
            printLongLine(*data);
        }
        else
        {
            printLine("data is NULL");
        }
        break;
    }
}
void FUN1()
{
    long * data;
    long tmpData = 5L;
    while(1)
    {
        {
            data = &tmpData;
        }
        break;
    }
    while(1)
    {
        printLongLine(*data);
        break;
    }
}
