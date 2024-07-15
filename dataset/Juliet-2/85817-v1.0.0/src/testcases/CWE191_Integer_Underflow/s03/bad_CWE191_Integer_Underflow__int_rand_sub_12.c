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
        data = -2;
    }
    if(globalReturnsTrueOrFalse())
    {
        {
<START>
            int result = data - 1;
<END>
            printIntLine(result);
        }
    }
    else
    {
        if (data > INT_MIN)
        {
            int result = data - 1;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform subtraction.");
        }
    }
}
