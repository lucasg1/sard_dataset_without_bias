void FUN0(float data);
void FUN1()
{
    float data;
    void (*funcPtr) (float) = FUN0;
    data = 0.0F;
    data = 2.0F;
    funcPtr(data);
}
void FUN2(float data);
void FUN3()
{
    float data;
    void (*funcPtr) (float) = FUN2;
    data = 0.0F;
    fscanf (stdin, "%f", &data);
    funcPtr(data);
}
void FUN0(float data)
{
    {
        int result = (int)(100.0 / data);
        printIntLine(result);
    }
}
void FUN2(float data)
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
