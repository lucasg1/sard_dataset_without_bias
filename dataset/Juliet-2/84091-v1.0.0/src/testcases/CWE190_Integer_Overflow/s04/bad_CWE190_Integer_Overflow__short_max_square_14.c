void FUN0()
{
    short data;
    data = 0;
    if(globalFive==5)
    {
        data = SHRT_MAX;
    }
    if(globalFive==5)
    {
        {
<START>
            short result = data * data;
<END>
            printIntLine(result);
        }
    }
}
