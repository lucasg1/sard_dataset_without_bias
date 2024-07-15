static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    float data;
    data = 0.0F;
    if(staticTrue)
    {
        fscanf (stdin, "%f", &data);
    }
    if(staticFalse)
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
    if(staticTrue)
    {
        fscanf (stdin, "%f", &data);
    }
    if(staticTrue)
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
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 2.0F;
    }
    if(staticTrue)
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
    if(staticTrue)
    {
        data = 2.0F;
    }
    if(staticTrue)
    {
        {
            int result = (int)(100.0 / data);
            printIntLine(result);
        }
    }
}
