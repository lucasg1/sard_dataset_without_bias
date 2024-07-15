void FUN0()
{
    char data;
    data = ' ';
    if(globalReturnsTrueOrFalse())
    {
        data = CHAR_MAX;
    }
    else
    {
        data = CHAR_MAX;
    }
    if(globalReturnsTrueOrFalse())
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
    if(globalReturnsTrueOrFalse())
    {
        data = 2;
    }
    else
    {
        data = 2;
    }
    if(globalReturnsTrueOrFalse())
    {
        {
            data++;
            char result = data;
            printHexCharLine(result);
        }
    }
    else
    {
        {
            data++;
            char result = data;
            printHexCharLine(result);
        }
    }
}
