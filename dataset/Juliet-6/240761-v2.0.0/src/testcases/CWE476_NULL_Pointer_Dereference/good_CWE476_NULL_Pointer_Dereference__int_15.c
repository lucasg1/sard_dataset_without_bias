void FUN0()
{
    int * data;
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
            printIntLine(*data);
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
    int * data;
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
            printIntLine(*data);
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
    int * data;
    int tmpData = 5;
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
        printIntLine(*data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN3()
{
    int * data;
    int tmpData = 5;
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
        printIntLine(*data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
