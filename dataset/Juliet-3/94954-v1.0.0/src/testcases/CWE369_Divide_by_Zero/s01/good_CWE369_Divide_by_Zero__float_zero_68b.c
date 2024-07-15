float VAR0;
float VAR1;
float VAR2;
void FUN0();
void FUN1();
void FUN2()
{
    float data;
    data = 0.0F;
    data = 2.0F;
    VAR1 = data;
    FUN0();
}
void FUN3()
{
    float data;
    data = 0.0F;
    data = 0.0F;
    VAR2 = data;
    FUN1();
}
extern float VAR0;
extern float VAR1;
extern float VAR2;
void FUN0()
{
    float data = VAR1;
    {
        int result = (int)(100.0 / data);
        printIntLine(result);
    }
}
void FUN1()
{
    float data = VAR2;
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
