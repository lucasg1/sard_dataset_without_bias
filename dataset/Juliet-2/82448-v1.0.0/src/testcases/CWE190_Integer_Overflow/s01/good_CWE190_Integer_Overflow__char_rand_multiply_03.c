void FUN0()
{
    char data;
    data = ' ';
    if(5==5)
    {
        data = (char)RAND32();
    }
    if(5!=5)
    {
        printLine("Benign, fixed string");
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
    if(5==5)
    {
        data = (char)RAND32();
    }
    if(5==5)
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
void FUN2()
{
    char data;
    data = ' ';
    if(5!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 2;
    }
    if(5==5)
    {
        if(data > 0) 
        {
            char result = data * 2;
            printHexCharLine(result);
        }
    }
}
void FUN3()
{
    char data;
    data = ' ';
    if(5==5)
    {
        data = 2;
    }
    if(5==5)
    {
        if(data > 0) 
        {
            char result = data * 2;
            printHexCharLine(result);
        }
    }
}
