void FUN0()
{
    int data;
    data = -1;
    if(globalReturnsTrue())
    {
        data = RAND32();
    }
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if( data != 0 )
        {
            printIntLine(100 % data);
        }
        else
        {
            printLine("This would result in a divide by zero");
        }
    }
}
void FUN1()
{
    int data;
    data = -1;
    if(globalReturnsTrue())
    {
        data = RAND32();
    }
    if(globalReturnsTrue())
    {
        if( data != 0 )
        {
            printIntLine(100 % data);
        }
        else
        {
            printLine("This would result in a divide by zero");
        }
    }
}
void FUN2()
{
    int data;
    data = -1;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 7;
    }
    if(globalReturnsTrue())
    {
        printIntLine(100 % data);
    }
}
void FUN3()
{
    int data;
    data = -1;
    if(globalReturnsTrue())
    {
        data = 7;
    }
    if(globalReturnsTrue())
    {
        printIntLine(100 % data);
    }
}
