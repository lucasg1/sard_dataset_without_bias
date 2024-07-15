void FUN0()
{
    char data;
    data = ' ';
    if(globalTrue)
    {
        fscanf (stdin, "%c", &data);
    }
    if(globalFalse)
    {
        printLine("Benign, fixed string");
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
    if(globalTrue)
    {
        fscanf (stdin, "%c", &data);
    }
    if(globalTrue)
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
void FUN2()
{
    char data;
    data = ' ';
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = -2;
    }
    if(globalTrue)
    {
        {
            --data;
            char result = data;
            printHexCharLine(result);
        }
    }
}
void FUN3()
{
    char data;
    data = ' ';
    if(globalTrue)
    {
        data = -2;
    }
    if(globalTrue)
    {
        {
            --data;
            char result = data;
            printHexCharLine(result);
        }
    }
}
