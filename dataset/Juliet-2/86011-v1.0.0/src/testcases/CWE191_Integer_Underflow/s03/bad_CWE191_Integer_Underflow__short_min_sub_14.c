void FUN0()
{
    short data;
    data = 0;
    if(globalFive==5)
    {
        data = SHRT_MIN;
    }
    if(globalFive==5)
    {
        {
<START>
            short result = data - 1;
<END>
            printIntLine(result);
        }
    }
}
