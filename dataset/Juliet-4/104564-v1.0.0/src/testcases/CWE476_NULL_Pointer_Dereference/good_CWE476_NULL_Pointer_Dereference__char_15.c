void FUN0()
{
    char * data;
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
            printHexCharLine(data[0]);
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
    char * data;
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
            printHexCharLine(data[0]);
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
    char * data;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        data = "Good";
        break;
    }
    switch(7)
    {
    case 7:
        printHexCharLine(data[0]);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN3()
{
    char * data;
    switch(6)
    {
    case 6:
        data = "Good";
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        printHexCharLine(data[0]);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
