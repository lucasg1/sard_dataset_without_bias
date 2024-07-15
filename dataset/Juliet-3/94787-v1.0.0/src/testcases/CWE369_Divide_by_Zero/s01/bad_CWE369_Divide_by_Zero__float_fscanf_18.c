void FUN0()
{
    float data;
    data = 0.0F;
    goto source;
source:
    fscanf (stdin, "%f", &data);
    goto sink;
sink:
    {
<START>
        int result = (int)(100.0 / data);
<END>
        printIntLine(result);
    }
}
