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
        if(data > 0) 
        {
            if (data < (CHAR_MAX/2))
            {
                char result = data * 2;
                printHexCharLine(result);
            }
            else
            {
                printLine("data value is too large to perform arithmetic safely.");
            }
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
        if(data > 0) 
        {
            if (data < (CHAR_MAX/2))
            {
                char result = data * 2;
                printHexCharLine(result);
            }
            else
            {
                printLine("data value is too large to perform arithmetic safely.");
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
        if(data > 0) 
        {
            char result = data * 2;
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
        if(data > 0) 
        {
            char result = data * 2;
            printHexCharLine(result);
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
