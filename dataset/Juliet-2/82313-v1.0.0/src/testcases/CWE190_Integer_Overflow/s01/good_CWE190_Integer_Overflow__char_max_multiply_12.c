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
    }
    else
    {
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
        if(data > 0) 
        {
            char result = data * 2;
            printHexCharLine(result);
        }
    }
    else
    {
        if(data > 0) 
        {
            char result = data * 2;
            printHexCharLine(result);
        }
    }
}
