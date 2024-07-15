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
        {
<START>
            int result = data * data;
<END>
            printIntLine(result);
        }
    }
    else
    {
        if (data > INT_MIN && abs(data) < (long)sqrt((double)INT_MAX))
        {
            int result = data * data;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
