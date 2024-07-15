void FUN0()
{
    short data;
    data = 0;
    if(globalReturnsTrue())
    {
        fscanf (stdin, "%hd", &data);
    }
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if(data > 0) 
        {
            if (data < (SHRT_MAX/2))
            {
                short result = data * 2;
                printIntLine(result);
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
    short data;
    data = 0;
    if(globalReturnsTrue())
    {
        fscanf (stdin, "%hd", &data);
    }
    if(globalReturnsTrue())
    {
        if(data > 0) 
        {
            if (data < (SHRT_MAX/2))
            {
                short result = data * 2;
                printIntLine(result);
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
    short data;
    data = 0;
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
        if(data > 0) 
        {
            short result = data * 2;
            printIntLine(result);
        }
    }
}
void FUN3()
{
    short data;
    data = 0;
    if(globalReturnsTrue())
    {
        data = 2;
    }
    if(globalReturnsTrue())
    {
        if(data > 0) 
        {
            short result = data * 2;
            printIntLine(result);
        }
    }
}
