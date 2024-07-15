void FUN0()
{
    unsigned int data;
    data = 0;
    switch(6)
    {
    case 6:
        data = 0;
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
        if (data > 0)
        {
            --data;
            unsigned int result = data;
            printUnsignedLine(result);
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
    unsigned int data;
    data = 0;
    switch(6)
    {
    case 6:
        data = 0;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        if (data > 0)
        {
            --data;
            unsigned int result = data;
            printUnsignedLine(result);
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
    unsigned int data;
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
        --data;
        unsigned int result = data;
        printUnsignedLine(result);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN3()
{
    unsigned int data;
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
        --data;
        unsigned int result = data;
        printUnsignedLine(result);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
