void FUN0()
{
    char data;
    data = ' ';
    if(globalReturnsTrueOrFalse())
    {
        data = CHAR_MIN;
    }
    else
    {
        data = CHAR_MIN;
    }
    if(globalReturnsTrueOrFalse())
    {
        if (data > CHAR_MIN)
        {
            data--;
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
            data--;
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
            data--;
            char result = data;
            printHexCharLine(result);
        }
    }
    else
    {
        {
            data--;
            char result = data;
            printHexCharLine(result);
        }
    }
}
