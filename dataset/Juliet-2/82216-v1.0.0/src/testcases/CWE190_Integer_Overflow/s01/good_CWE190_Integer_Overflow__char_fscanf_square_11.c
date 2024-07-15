void FUN0()
{
    char data;
    data = ' ';
    if(globalReturnsTrue())
    {
        fscanf (stdin, "%c", &data);
    }
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (abs((long)data) <= (long)sqrt((double)CHAR_MAX))
        {
            char result = data * data;
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
        fscanf (stdin, "%c", &data);
    }
    if(globalReturnsTrue())
    {
        if (abs((long)data) <= (long)sqrt((double)CHAR_MAX))
        {
            char result = data * data;
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
            char result = data * data;
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
            char result = data * data;
            printHexCharLine(result);
        }
    }
}
