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
            data--;
<END>
            short result = data;
            printIntLine(result);
        }
    }
}
