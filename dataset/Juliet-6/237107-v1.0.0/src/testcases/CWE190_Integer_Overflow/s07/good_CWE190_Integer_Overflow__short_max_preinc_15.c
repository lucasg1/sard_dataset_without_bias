void FUN0()
{
    short data;
    data = 0;
    switch(6)
    {
    case 6:
        data = SHRT_MAX;
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
        if (data < SHRT_MAX)
        {
            ++data;
            short result = data;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
        break;
    }
}
void FUN1()
{
    short data;
    data = 0;
    switch(6)
    {
    case 6:
        data = SHRT_MAX;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        if (data < SHRT_MAX)
        {
            ++data;
            short result = data;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN2()
{
    short data;
    data = 0;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        data = 2;
        break;
    }
    switch(7)
    {
    case 7:
    {
        ++data;
        short result = data;
        printIntLine(result);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN3()
{
    short data;
    data = 0;
    switch(6)
    {
    case 6:
        data = 2;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
    {
        ++data;
        short result = data;
        printIntLine(result);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
