void FUN0()
{
    short data;
    data = 0;
    goto source;
source:
    data = (short)RAND32();
    goto sink;
sink:
    {
<START>
        ++data;
<END>
        short result = data;
        printIntLine(result);
    }
}
