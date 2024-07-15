void FUN0()
{
    short data;
    data = 0;
    switch(6)
    {
    case 6:
        data = (short)RAND32();
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
        if (data > SHRT_MIN)
        {
            short result = data - 1;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform subtraction.");
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
        data = (short)RAND32();
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        if (data > SHRT_MIN)
        {
            short result = data - 1;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform subtraction.");
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
        data = -2;
        break;
    }
    switch(7)
    {
    case 7:
    {
        short result = data - 1;
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
        data = -2;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
    {
        short result = data - 1;
        printIntLine(result);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
