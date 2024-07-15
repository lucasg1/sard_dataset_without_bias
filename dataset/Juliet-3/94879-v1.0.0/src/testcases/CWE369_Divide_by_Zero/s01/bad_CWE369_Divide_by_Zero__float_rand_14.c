void FUN0()
{
    float data;
    data = 0.0F;
    if(globalFive==5)
    {
        data = (float)RAND32();
    }
    if(globalFive==5)
    {
        {
<START>
            int result = (int)(100.0 / data);
<END>
            printIntLine(result);
        }
    }
}
