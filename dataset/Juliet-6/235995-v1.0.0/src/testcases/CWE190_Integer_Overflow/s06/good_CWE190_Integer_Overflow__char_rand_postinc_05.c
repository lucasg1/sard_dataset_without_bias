static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    char data;
    data = ' ';
    if(staticTrue)
    {
        data = (char)RAND32();
    }
    if(staticFalse)
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
    if(staticTrue)
    {
        data = (char)RAND32();
    }
    if(staticTrue)
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
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 2;
    }
    if(staticTrue)
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
    if(staticTrue)
    {
        data = 2;
    }
    if(staticTrue)
    {
        {
            data++;
            char result = data;
            printHexCharLine(result);
        }
    }
}
