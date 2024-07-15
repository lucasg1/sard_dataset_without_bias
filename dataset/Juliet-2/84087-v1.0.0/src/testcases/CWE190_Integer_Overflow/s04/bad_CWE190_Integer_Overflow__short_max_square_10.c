void FUN0()
{
    short data;
    data = 0;
    if(globalTrue)
    {
        data = SHRT_MAX;
    }
    if(globalTrue)
    {
        {
<START>
            short result = data * data;
<END>
            printIntLine(result);
        }
    }
}
