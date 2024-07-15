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
        short result = data + 1;
<END>
        printIntLine(result);
    }
}
