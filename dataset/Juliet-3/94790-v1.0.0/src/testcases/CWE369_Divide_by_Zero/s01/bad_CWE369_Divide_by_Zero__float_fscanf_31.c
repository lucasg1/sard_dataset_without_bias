void FUN0()
{
    float data;
    data = 0.0F;
    fscanf (stdin, "%f", &data);
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
