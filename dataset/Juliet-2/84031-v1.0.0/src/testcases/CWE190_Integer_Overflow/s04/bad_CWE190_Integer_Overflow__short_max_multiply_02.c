void FUN0()
{
    short data;
    data = 0;
    if(1)
    {
        data = SHRT_MAX;
    }
    if(1)
    {
        if(data > 0) 
        {
<START>
            short result = data * 2;
<END>
            printIntLine(result);
        }
    }
}
