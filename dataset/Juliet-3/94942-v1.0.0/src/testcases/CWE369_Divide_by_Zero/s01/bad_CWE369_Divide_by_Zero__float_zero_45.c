static float VAR0;
static float VAR1;
static float VAR2;
void FUN0()
{
    float data = VAR0;
    {
<START>
        int result = (int)(100.0 / data);
<END>
        printIntLine(result);
    }
}
void FUN1()
{
    float data;
    data = 0.0F;
    data = 0.0F;
    VAR0 = data;
    FUN0();
}
