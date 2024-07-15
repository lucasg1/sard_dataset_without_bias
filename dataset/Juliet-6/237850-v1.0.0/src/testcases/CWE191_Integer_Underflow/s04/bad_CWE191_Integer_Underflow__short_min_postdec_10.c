void FUN0()
{
    short data;
    data = 0;
    if(globalTrue)
    {
        data = SHRT_MIN;
    }
    if(globalTrue)
    {
        {
<START>
            data--;
<END>
            short result = data;
            printIntLine(result);
        }
    }
}
