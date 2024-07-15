static int staticFive = 5;
void FUN0()
{
    float data;
    data = 0.0F;
    if(staticFive==5)
    {
        data = (float)RAND32();
    }
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
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
    if(staticFive==5)
    {
        data = (float)RAND32();
    }
    if(staticFive==5)
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
void FUN2()
{
    float data;
    data = 0.0F;
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 2.0F;
    }
    if(staticFive==5)
    {
        {
            int result = (int)(100.0 / data);
            printIntLine(result);
        }
    }
}
void FUN3()
{
    float data;
    data = 0.0F;
    if(staticFive==5)
    {
        data = 2.0F;
    }
    if(staticFive==5)
    {
        {
            int result = (int)(100.0 / data);
            printIntLine(result);
        }
    }
}
