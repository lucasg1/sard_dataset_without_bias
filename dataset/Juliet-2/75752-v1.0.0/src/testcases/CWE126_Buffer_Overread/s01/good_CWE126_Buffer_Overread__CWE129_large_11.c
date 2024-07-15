void FUN0()
{
    int data;
    data = -1;
    if(globalReturnsTrue())
    {
        data = 10;
    }
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            int buffer[10] = { 0 };
            if (data >= 0 && data < (10))
            {
                printIntLine(buffer[data]);
            }
            else
            {
                printLine("ERROR: Array index is out-of-bounds");
            }
        }
    }
}
void FUN1()
{
    int data;
    data = -1;
    if(globalReturnsTrue())
    {
        data = 10;
    }
    if(globalReturnsTrue())
    {
        {
            int buffer[10] = { 0 };
            if (data >= 0 && data < (10))
            {
                printIntLine(buffer[data]);
            }
            else
            {
                printLine("ERROR: Array index is out-of-bounds");
            }
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
        {
            int buffer[10] = { 0 };
            if (data >= 0)
            {
                printIntLine(buffer[data]);
            }
            else
            {
                printLine("ERROR: Array index is negative");
            }
        }
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
        {
            int buffer[10] = { 0 };
            if (data >= 0)
            {
                printIntLine(buffer[data]);
            }
            else
            {
                printLine("ERROR: Array index is negative");
            }
        }
    }
}
