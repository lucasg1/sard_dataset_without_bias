void FUN0()
{
    short data;
    data = 0;
    if(globalTrue)
    {
        data = (short)RAND32();
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
