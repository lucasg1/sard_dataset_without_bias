void FUN0()
{
    float data;
    data = 0.0F;
    data = (float)RAND32();
    {
        float dataCopy = data;
        float data = dataCopy;
        {
<START>
            int result = (int)(100.0 / data);
<END>
            printIntLine(result);
        }
    }
}
