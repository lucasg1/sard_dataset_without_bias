void FUN0()
{
    int data;
    data = 0;
    if(globalTrue)
    {
        data = RAND32();
    }
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (data < INT_MAX)
        {
            ++data;
            int result = data;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
void FUN1()
{
    int data;
    data = 0;
    if(globalTrue)
    {
        data = RAND32();
    }
    if(globalTrue)
    {
        if (data < INT_MAX)
        {
            ++data;
            int result = data;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
void FUN2()
{
    int data;
    data = 0;
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 2;
    }
    if(globalTrue)
    {
        {
            ++data;
            int result = data;
            printIntLine(result);
        }
    }
}
void FUN3()
{
    int data;
    data = 0;
    if(globalTrue)
    {
        data = 2;
    }
    if(globalTrue)
    {
        {
            ++data;
            int result = data;
            printIntLine(result);
        }
    }
}
