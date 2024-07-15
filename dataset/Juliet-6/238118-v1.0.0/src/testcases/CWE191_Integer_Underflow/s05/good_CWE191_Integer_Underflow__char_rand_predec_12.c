void FUN0()
{
    char data;
    data = ' ';
    if(globalReturnsTrueOrFalse())
    {
        data = (char)RAND32();
    }
    else
    {
        data = (char)RAND32();
    }
    if(globalReturnsTrueOrFalse())
    {
        if (data > CHAR_MIN)
        {
            --data;
            char result = data;
            printHexCharLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
    else
    {
        if (data > CHAR_MIN)
        {
            --data;
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
    if(globalReturnsTrueOrFalse())
    {
        data = -2;
    }
    else
    {
        data = -2;
    }
    if(globalReturnsTrueOrFalse())
    {
        {
            --data;
            char result = data;
            printHexCharLine(result);
        }
    }
    else
    {
        {
            --data;
            char result = data;
            printHexCharLine(result);
        }
    }
}
