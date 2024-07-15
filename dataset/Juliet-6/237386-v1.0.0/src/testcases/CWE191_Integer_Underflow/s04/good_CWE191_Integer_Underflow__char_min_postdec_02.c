void FUN0()
{
    char data;
    data = ' ';
    if(1)
    {
        data = CHAR_MIN;
    }
    if(0)
    {
        printLine("Benign, fixed string");
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
    if(1)
    {
        data = CHAR_MIN;
    }
    if(1)
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
void FUN2()
{
    char data;
    data = ' ';
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = -2;
    }
    if(1)
    {
        {
            data--;
            char result = data;
            printHexCharLine(result);
        }
    }
}
void FUN3()
{
    char data;
    data = ' ';
    if(1)
    {
        data = -2;
    }
    if(1)
    {
        {
            data--;
            char result = data;
            printHexCharLine(result);
        }
    }
}
