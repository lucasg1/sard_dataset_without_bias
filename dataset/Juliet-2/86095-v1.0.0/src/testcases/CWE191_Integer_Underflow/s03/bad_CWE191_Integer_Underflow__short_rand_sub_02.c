void FUN0()
{
    short data;
    data = 0;
    if(1)
    {
        data = (short)RAND32();
    }
    if(1)
    {
        {
<START>
            short result = data - 1;
<END>
            printIntLine(result);
        }
    }
}