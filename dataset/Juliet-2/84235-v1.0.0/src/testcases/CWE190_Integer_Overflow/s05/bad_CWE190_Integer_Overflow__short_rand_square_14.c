void FUN0()
{
    short data;
    data = 0;
    if(globalFive==5)
    {
        data = (short)RAND32();
    }
    if(globalFive==5)
    {
        {
<START>
            short result = data * data;
<END>
            printIntLine(result);
        }
    }
}
