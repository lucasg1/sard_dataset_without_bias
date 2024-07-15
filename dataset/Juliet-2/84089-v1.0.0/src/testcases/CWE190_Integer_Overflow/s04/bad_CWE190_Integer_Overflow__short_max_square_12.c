void FUN0()
{
    short data;
    data = 0;
    if(globalReturnsTrueOrFalse())
    {
        data = SHRT_MAX;
    }
    else
    {
        data = 2;
    }
    if(globalReturnsTrueOrFalse())
    {
        {
<START>
            short result = data * data;
<END>
            printIntLine(result);
        }
    }
    else
    {
        if (abs((long)data) <= (long)sqrt((double)SHRT_MAX))
        {
            short result = data * data;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
