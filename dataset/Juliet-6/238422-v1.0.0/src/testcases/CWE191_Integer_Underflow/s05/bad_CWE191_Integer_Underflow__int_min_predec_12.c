void FUN0()
{
    int data;
    data = 0;
    if(globalReturnsTrueOrFalse())
    {
        data = INT_MIN;
    }
    else
    {
        data = -2;
    }
    if(globalReturnsTrueOrFalse())
    {
        {
<START>
            --data;
<END>
            int result = data;
            printIntLine(result);
        }
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
