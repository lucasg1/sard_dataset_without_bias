static int staticFive = 5;
void FUN0()
{
    char data;
    data = ' ';
    if(staticFive==5)
    {
        data = CHAR_MIN;
    }
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
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
    if(staticFive==5)
    {
        data = CHAR_MIN;
    }
    if(staticFive==5)
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
void FUN2()
{
    char data;
    data = ' ';
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = -2;
    }
    if(staticFive==5)
    {
        if(data < 0) 
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
    if(staticFive==5)
    {
        data = -2;
    }
    if(staticFive==5)
    {
        if(data < 0) 
        {
            char result = data * 2;
            printHexCharLine(result);
        }
    }
}
