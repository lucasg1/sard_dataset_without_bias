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
            short result = data - 1;
<END>
            printIntLine(result);
        }
    }
}
