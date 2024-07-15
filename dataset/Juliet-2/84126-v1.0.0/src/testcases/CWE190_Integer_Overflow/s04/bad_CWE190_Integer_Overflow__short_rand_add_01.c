void FUN0()
{
    short data;
    data = 0;
    data = (short)RAND32();
    {
<START>
        short result = data + 1;
<END>
        printIntLine(result);
    }
}
