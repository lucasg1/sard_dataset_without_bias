void FUN0()
{
    int data;
    data = -1;
    if(globalReturnsTrueOrFalse())
    {
        data = 10;
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
<START>
                printIntLine(buffer[data]);
<END>
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
