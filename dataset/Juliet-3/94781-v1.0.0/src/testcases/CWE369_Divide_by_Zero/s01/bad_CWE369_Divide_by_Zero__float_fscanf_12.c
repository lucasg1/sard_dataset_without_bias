void FUN0()
{
    float data;
    data = 0.0F;
    if(globalReturnsTrueOrFalse())
    {
        fscanf (stdin, "%f", &data);
    }
    else
    {
        data = 2.0F;
    }
    if(globalReturnsTrueOrFalse())
    {
        {
<START>
            int result = (int)(100.0 / data);
<END>
            printIntLine(result);
        }
    }
    else
    {
        if(fabs(data) > 0.000001)
        {
            int result = (int)(100.0 / data);
            printIntLine(result);
        }
        else
        {
            printLine("This would result in a divide by zero");
        }
    }
}
