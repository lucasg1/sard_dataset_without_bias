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
        if(data < 0) 
        {
<START>
            short result = data * 2;
<END>
            printIntLine(result);
        }
    }
}
