void FUN0()
{
    short data;
    data = 0;
    if(5==5)
    {
        data = SHRT_MAX;
    }
    if(5==5)
    {
        {
<START>
            ++data;
<END>
            short result = data;
            printIntLine(result);
        }
    }
}
