void FUN0()
{
    int64_t * data;
    switch(6)
    {
    case 6:
        data = NULL;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(8)
    {
    case 7:
        printLine("Benign, fixed string");
        break;
    default:
        if (data != NULL)
        {
            printLongLongLine(*data);
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
    int64_t * data;
    switch(6)
    {
    case 6:
        data = NULL;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        if (data != NULL)
        {
            printLongLongLine(*data);
        }
        else
        {
            printLine("data is NULL");
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN2()
{
    int64_t * data;
    int64_t tmpData = 5LL;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        data = &tmpData;
    }
    break;
    }
    switch(7)
    {
    case 7:
        printLongLongLine(*data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN3()
{
    int64_t * data;
    int64_t tmpData = 5LL;
    switch(6)
    {
    case 6:
    {
        data = &tmpData;
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        printLongLongLine(*data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
