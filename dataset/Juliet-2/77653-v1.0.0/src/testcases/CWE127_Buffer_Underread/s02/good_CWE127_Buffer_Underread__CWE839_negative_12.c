void FUN0()
{
    int data;
    data = -1;
    if(globalReturnsTrueOrFalse())
    {
        data = -5;
    }
    else
    {
        data = -5;
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
            if (data < 10)
            {
                printIntLine(buffer[data]);
            }
            else
            {
                printLine("ERROR: Array index is too big.");
            }
        }
    }
    else
    {
        {
            int buffer[10] = { 0 };
            if (data < 10)
            {
                printIntLine(buffer[data]);
            }
            else
            {
                printLine("ERROR: Array index is too big.");
            }
        }
    }
}
