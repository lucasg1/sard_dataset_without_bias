void FUN0()
{
    short data;
    data = 0;
    goto source;
source:
    data = SHRT_MAX;
    goto sink;
sink:
    {
<START>
        data++;
<END>
        short result = data;
        printIntLine(result);
    }
}
