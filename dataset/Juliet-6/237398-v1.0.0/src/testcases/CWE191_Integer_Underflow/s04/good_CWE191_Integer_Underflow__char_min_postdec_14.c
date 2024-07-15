void FUN0()
{
    char data;
    data = ' ';
    if(globalFive==5)
    {
        data = CHAR_MIN;
    }
    if(globalFive!=5)
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
    if(globalFive==5)
    {
        data = CHAR_MIN;
    }
    if(globalFive==5)
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
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = -2;
    }
    if(globalFive==5)
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
    if(globalFive==5)
    {
        data = -2;
    }
    if(globalFive==5)
    {
        {
            data--;
            char result = data;
            printHexCharLine(result);
        }
    }
}
