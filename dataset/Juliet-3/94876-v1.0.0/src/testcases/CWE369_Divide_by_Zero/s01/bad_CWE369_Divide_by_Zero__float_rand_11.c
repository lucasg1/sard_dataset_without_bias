void FUN0()
{
    float data;
    data = 0.0F;
    if(globalReturnsTrue())
    {
        data = (float)RAND32();
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
