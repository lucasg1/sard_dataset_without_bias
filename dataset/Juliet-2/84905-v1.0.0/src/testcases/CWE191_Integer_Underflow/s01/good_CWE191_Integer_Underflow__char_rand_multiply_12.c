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
        if(data < 0) 
        {
            if (data > (CHAR_MIN/2))
            {
                char result = data * 2;
                printHexCharLine(result);
            }
            else
            {
                printLine("data value is too small to perform multiplication.");
            }
        }
    }
    else
    {
        if(data < 0) 
        {
            if (data > (CHAR_MIN/2))
            {
                char result = data * 2;
                printHexCharLine(result);
            }
            else
            {
                printLine("data value is too small to perform multiplication.");
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
        data = -2;
    }
    else
    {
        data = -2;
    }
    if(globalReturnsTrueOrFalse())
    {
        if(data < 0) 
        {
            char result = data * 2;
            printHexCharLine(result);
        }
    }
    else
    {
        if(data < 0) 
        {
            char result = data * 2;
            printHexCharLine(result);
        }
    }
}
