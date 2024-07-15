void FUN0()
{
    float data;
    data = 0.0F;
    if(globalFive==5)
    {
        fscanf (stdin, "%f", &data);
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
