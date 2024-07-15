void FUN0()
{
    char data;
    data = ' ';
    switch(6)
    {
    case 6:
        data = (char)RAND32();
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
        if (data < CHAR_MAX)
        {
            ++data;
            char result = data;
            printHexCharLine(result);
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
    char data;
    data = ' ';
    switch(6)
    {
    case 6:
        data = (char)RAND32();
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        if (data < CHAR_MAX)
        {
            ++data;
            char result = data;
            printHexCharLine(result);
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
    char data;
    data = ' ';
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
        char result = data;
        printHexCharLine(result);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN3()
{
    char data;
    data = ' ';
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
        char result = data;
        printHexCharLine(result);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
