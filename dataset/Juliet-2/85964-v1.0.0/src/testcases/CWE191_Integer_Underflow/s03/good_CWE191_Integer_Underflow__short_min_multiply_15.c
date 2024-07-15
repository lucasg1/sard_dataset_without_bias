void FUN0()
{
    short data;
    data = 0;
    switch(6)
    {
    case 6:
        data = SHRT_MIN;
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
        if(data < 0) 
        {
            if (data > (SHRT_MIN/2))
            {
                short result = data * 2;
                printIntLine(result);
            }
            else
            {
                printLine("data value is too small to perform multiplication.");
            }
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
        data = SHRT_MIN;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        if(data < 0) 
        {
            if (data > (SHRT_MIN/2))
            {
                short result = data * 2;
                printIntLine(result);
            }
            else
            {
                printLine("data value is too small to perform multiplication.");
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
        if(data < 0) 
        {
            short result = data * 2;
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
        if(data < 0) 
        {
            short result = data * 2;
            printIntLine(result);
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
