void FUN0(float data);
void FUN1(float data)
{
    FUN0(data);
}
void FUN2(float data);
void FUN3(float data)
{
    FUN2(data);
}
void FUN1(float data);
void FUN5(float data)
{
    FUN1(data);
}
void FUN3(float data);
void FUN7(float data)
{
    FUN3(data);
}
void FUN8(float data);
void FUN0(float data)
{
    FUN8(data);
}
void FUN10(float data);
void FUN2(float data)
{
    FUN10(data);
}
void FUN5(float data);
void FUN13()
{
    float data;
    data = 0.0F;
    data = 2.0F;
    FUN5(data);
}
void FUN7(float data);
void FUN15()
{
    float data;
    data = 0.0F;
    data = (float)RAND32();
    FUN7(data);
}
void FUN8(float data)
{
    {
        int result = (int)(100.0 / data);
        printIntLine(result);
    }
}
void FUN10(float data)
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
