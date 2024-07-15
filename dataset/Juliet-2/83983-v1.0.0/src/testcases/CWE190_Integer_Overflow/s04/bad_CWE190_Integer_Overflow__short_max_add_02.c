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
        {
<START>
            short result = data + 1;
<END>
            printIntLine(result);
        }
    }
}
