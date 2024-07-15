void FUN0()
{
    short data;
    data = 0;
    if(globalReturnsTrueOrFalse())
    {
        data = (short)RAND32();
    }
    else
    {
        data = 2;
    }
    if(globalReturnsTrueOrFalse())
    {
        {
<START>
            ++data;
<END>
            short result = data;
            printIntLine(result);
        }
    }
    else
    {
        if (data < SHRT_MAX)
        {
            ++data;
            short result = data;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
