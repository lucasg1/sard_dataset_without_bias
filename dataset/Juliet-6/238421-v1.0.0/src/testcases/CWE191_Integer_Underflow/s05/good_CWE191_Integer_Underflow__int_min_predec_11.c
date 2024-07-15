void FUN0()
{
    int data;
    data = 0;
    if(globalReturnsTrue())
    {
        data = INT_MIN;
    }
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (data > INT_MIN)
        {
            --data;
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
    if(globalReturnsTrue())
    {
        data = INT_MIN;
    }
    if(globalReturnsTrue())
    {
        if (data > INT_MIN)
        {
            --data;
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
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = -2;
    }
    if(globalReturnsTrue())
    {
        {
            --data;
            int result = data;
            printIntLine(result);
        }
    }
}
void FUN3()
{
    int data;
    data = 0;
    if(globalReturnsTrue())
    {
        data = -2;
    }
    if(globalReturnsTrue())
    {
        {
            --data;
            int result = data;
            printIntLine(result);
        }
    }
}
