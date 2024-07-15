void FUN0()
{
    short data;
    data = 0;
    if(globalReturnsTrue())
    {
        data = SHRT_MAX;
    }
    if(globalReturnsTrue())
    {
        {
<START>
            short result = data * data;
<END>
            printIntLine(result);
        }
    }
}
