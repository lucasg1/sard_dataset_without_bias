void FUN0()
{
    char data;
    data = ' ';
    if(globalReturnsTrue())
    {
        data = CHAR_MAX;
    }
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (data < CHAR_MAX)
        {
            data++;
            char result = data;
            printHexCharLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
void FUN1()
{
    char data;
    data = ' ';
    if(globalReturnsTrue())
    {
        data = CHAR_MAX;
    }
    if(globalReturnsTrue())
    {
        if (data < CHAR_MAX)
        {
            data++;
            char result = data;
            printHexCharLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
void FUN2()
{
    char data;
    data = ' ';
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 2;
    }
    if(globalReturnsTrue())
    {
        {
            data++;
            char result = data;
            printHexCharLine(result);
        }
    }
}
void FUN3()
{
    char data;
    data = ' ';
    if(globalReturnsTrue())
    {
        data = 2;
    }
    if(globalReturnsTrue())
    {
        {
            data++;
            char result = data;
            printHexCharLine(result);
        }
    }
}
