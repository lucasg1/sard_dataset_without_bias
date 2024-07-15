static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    float data;
    data = 0.0F;
    if(STATIC_CONST_TRUE)
    {
        data = (float)RAND32();
    }
    if(STATIC_CONST_FALSE)
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
    if(STATIC_CONST_TRUE)
    {
        data = (float)RAND32();
    }
    if(STATIC_CONST_TRUE)
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
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 2.0F;
    }
    if(STATIC_CONST_TRUE)
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
    if(STATIC_CONST_TRUE)
    {
        data = 2.0F;
    }
    if(STATIC_CONST_TRUE)
    {
        {
            int result = (int)(100.0 / data);
            printIntLine(result);
        }
    }
}
