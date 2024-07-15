void FUN0()
{
    float data;
    data = 0.0F;
    goto source;
source:
    data = 0.0F;
    goto sink;
sink:
    {
<START>
        int result = (int)(100.0 / data);
<END>
        printIntLine(result);
    }
}
