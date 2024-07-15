void FUN0()
{
    short data;
    data = 0;
    if(globalReturnsTrue())
    {
        data = SHRT_MIN;
    }
    if(globalReturnsTrue())
    {
        {
<START>
            --data;
<END>
            short result = data;
            printIntLine(result);
        }
    }
}
