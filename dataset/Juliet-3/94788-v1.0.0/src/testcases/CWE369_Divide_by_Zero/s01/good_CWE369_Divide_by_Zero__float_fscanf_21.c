static int VAR0 = 0;
static int VAR1 = 0;
static int VAR2 = 0;
void FUN0(float data)
{
    if(VAR0)
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
    fscanf (stdin, "%f", &data);
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(float data)
{
    if(VAR1)
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
void FUN3()
{
    float data;
    data = 0.0F;
    fscanf (stdin, "%f", &data);
    VAR1 = 1; 
    FUN2(data);
}
void FUN4(float data)
{
    if(VAR2)
    {
        {
            int result = (int)(100.0 / data);
            printIntLine(result);
        }
    }
}
void FUN5()
{
    float data;
    data = 0.0F;
    data = 2.0F;
    VAR2 = 1; 
    FUN4(data);
}
