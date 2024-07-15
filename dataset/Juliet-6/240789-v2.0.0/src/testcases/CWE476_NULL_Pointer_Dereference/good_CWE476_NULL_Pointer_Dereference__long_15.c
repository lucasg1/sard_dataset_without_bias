void FUN0()
{
    long * data;
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
            printLongLine(*data);
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
    long * data;
    long tmpData = 5L;
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
        printLongLine(*data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN3()
{
    long * data;
    long tmpData = 5L;
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
        printLongLine(*data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
