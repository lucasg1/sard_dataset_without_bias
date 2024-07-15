void FUN0()
{
    int data;
    data = -1;
    if(globalReturnsTrueOrFalse())
    {
        data = RAND32();
    }
    else
    {
        data = RAND32();
    }
    if(globalReturnsTrueOrFalse())
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
    if(globalReturnsTrueOrFalse())
    {
        data = 7;
    }
    else
    {
        data = 7;
    }
    if(globalReturnsTrueOrFalse())
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
    else
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
