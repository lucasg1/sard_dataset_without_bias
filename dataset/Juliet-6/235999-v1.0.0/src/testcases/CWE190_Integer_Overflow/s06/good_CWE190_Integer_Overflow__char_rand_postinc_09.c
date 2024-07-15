void FUN0()
{
    char data;
    data = ' ';
    if(GLOBAL_CONST_TRUE)
    {
        data = (char)RAND32();
    }
    if(GLOBAL_CONST_FALSE)
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
    if(GLOBAL_CONST_TRUE)
    {
        data = (char)RAND32();
    }
    if(GLOBAL_CONST_TRUE)
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
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 2;
    }
    if(GLOBAL_CONST_TRUE)
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
    if(GLOBAL_CONST_TRUE)
    {
        data = 2;
    }
    if(GLOBAL_CONST_TRUE)
    {
        {
            data++;
            char result = data;
            printHexCharLine(result);
        }
    }
}
