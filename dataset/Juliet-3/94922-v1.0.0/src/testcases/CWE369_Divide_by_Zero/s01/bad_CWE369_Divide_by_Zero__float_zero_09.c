void FUN0()
{
    float data;
    data = 0.0F;
    if(GLOBAL_CONST_TRUE)
    {
        data = 0.0F;
    }
    if(GLOBAL_CONST_TRUE)
    {
        {
<START>
            int result = (int)(100.0 / data);
<END>
            printIntLine(result);
        }
    }
}
