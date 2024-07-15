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
        fscanf (stdin, "%f", &data);
    }
    if(globalReturnsTrueOrFalse())
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
void FUN1()
{
    float data;
    data = 0.0F;
    if(globalReturnsTrueOrFalse())
    {
        data = 2.0F;
    }
    else
    {
        data = 2.0F;
    }
    if(globalReturnsTrueOrFalse())
    {
        {
            int result = (int)(100.0 / data);
            printIntLine(result);
        }
    }
    else
    {
        {
            int result = (int)(100.0 / data);
            printIntLine(result);
        }
    }
}
