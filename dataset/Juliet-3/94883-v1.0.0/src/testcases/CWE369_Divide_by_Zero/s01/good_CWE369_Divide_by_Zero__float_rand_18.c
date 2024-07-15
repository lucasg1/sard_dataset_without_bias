void FUN0()
{
    float data;
    data = 0.0F;
    goto source;
source:
    data = (float)RAND32();
    goto sink;
sink:
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
void FUN1()
{
    float data;
    data = 0.0F;
    goto source;
source:
    data = 2.0F;
    goto sink;
sink:
    {
        int result = (int)(100.0 / data);
        printIntLine(result);
    }
}
