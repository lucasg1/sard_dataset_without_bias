void FUN0()
{
    int data;
    data = 0;
    if(globalReturnsTrueOrFalse())
    {
        data = RAND32();
    }
    else
    {
        data = 2;
    }
    if(globalReturnsTrueOrFalse())
    {
        if(data > 0) 
        {
<START>
            int result = data * 2;
<END>
            printIntLine(result);
        }
    }
    else
    {
        if(data > 0) 
        {
            if (data < (INT_MAX/2))
            {
                int result = data * 2;
                printIntLine(result);
            }
            else
            {
                printLine("data value is too large to perform arithmetic safely.");
            }
        }
    }
}
