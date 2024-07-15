void FUN0()
{
    float data;
    data = 0.0F;
    if(globalTrue)
    {
        fscanf (stdin, "%f", &data);
    }
    if(globalTrue)
    {
        {
<START>
            int result = (int)(100.0 / data);
<END>
            printIntLine(result);
        }
    }
}
