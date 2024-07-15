void FUN0()
{
    float data;
    data = 0.0F;
    data = (float)RAND32();
    {
<START>
        int result = (int)(100.0 / data);
<END>
        printIntLine(result);
    }
}
