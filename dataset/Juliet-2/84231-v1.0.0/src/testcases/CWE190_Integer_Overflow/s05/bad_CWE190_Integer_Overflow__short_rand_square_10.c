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
            short result = data * data;
<END>
            printIntLine(result);
        }
    }
}