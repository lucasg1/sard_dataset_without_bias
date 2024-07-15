void FUN0(float data);
void FUN1()
{
    float data;
    data = 0.0F;
    data = 2.0F;
    FUN0(data);
}
void FUN2(float data);
void FUN3()
{
    float data;
    data = 0.0F;
    fscanf (stdin, "%f", &data);
    FUN2(data);
}
void FUN5(float data);
void FUN0(float data)
{
    FUN5(data);
}
void FUN7(float data);
void FUN2(float data)
{
    FUN7(data);
}
void FUN9(float data);
void FUN5(float data)
{
    FUN9(data);
}
void FUN11(float data);
void FUN7(float data)
{
    FUN11(data);
}
void FUN9(float data)
{
    {
        int result = (int)(100.0 / data);
        printIntLine(result);
    }
}
void FUN11(float data)
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
