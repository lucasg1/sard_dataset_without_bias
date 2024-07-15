void FUN0()
{
    float data;
    data = 0.0F;
    while(1)
    {
        data = 0.0F;
        break;
    }
    while(1)
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
        break;
    }
}
void FUN1()
{
    float data;
    data = 0.0F;
    while(1)
    {
        data = 2.0F;
        break;
    }
    while(1)
    {
        {
            int result = (int)(100.0 / data);
            printIntLine(result);
        }
        break;
    }
}
