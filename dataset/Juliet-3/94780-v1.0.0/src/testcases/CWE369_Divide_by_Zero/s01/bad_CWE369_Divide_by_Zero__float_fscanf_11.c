void FUN0()
{
    float data;
    data = 0.0F;
    if(globalReturnsTrue())
    {
        fscanf (stdin, "%f", &data);
    }
    if(globalReturnsTrue())
    {
        {
<START>
            int result = (int)(100.0 / data);
<END>
            printIntLine(result);
        }
    }
}
