void FUN0()
{
    short data;
    data = 0;
    data = (short)RAND32();
    {
<START>
        short result = data * data;
<END>
        printIntLine(result);
    }
}
