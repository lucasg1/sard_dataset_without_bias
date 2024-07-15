void FUN0()
{
    int data;
    data = -1;
    switch(6)
    {
    case 6:
        data = 10;
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
    {
        int buffer[10] = { 0 };
        if (data >= 0 && data < (10))
        {
            printIntLine(buffer[data]);
        }
        else
        {
            printLine("ERROR: Array index is out-of-bounds");
        }
    }
    break;
    }
}
void FUN1()
{
    int data;
    data = -1;
    switch(6)
    {
    case 6:
        data = 10;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
    {
        int buffer[10] = { 0 };
        if (data >= 0 && data < (10))
        {
            printIntLine(buffer[data]);
        }
        else
        {
            printLine("ERROR: Array index is out-of-bounds");
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN2()
{
    int data;
    data = -1;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        data = 7;
        break;
    }
    switch(7)
    {
    case 7:
    {
        int buffer[10] = { 0 };
        if (data >= 0)
        {
            printIntLine(buffer[data]);
        }
        else
        {
            printLine("ERROR: Array index is negative");
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN3()
{
    int data;
    data = -1;
    switch(6)
    {
    case 6:
        data = 7;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
    {
        int buffer[10] = { 0 };
        if (data >= 0)
        {
            printIntLine(buffer[data]);
        }
        else
        {
            printLine("ERROR: Array index is negative");
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
