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
            short result = data + 1;
<END>
            printIntLine(result);
        }
    }
}
