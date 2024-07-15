void FUN0()
{
    short data;
    data = 0;
    if(globalReturnsTrue())
    {
        data = (short)RAND32();
    }
    if(globalReturnsTrue())
    {
        {
<START>
            short result = data * data;
<END>
            printIntLine(result);
        }
    }
}
