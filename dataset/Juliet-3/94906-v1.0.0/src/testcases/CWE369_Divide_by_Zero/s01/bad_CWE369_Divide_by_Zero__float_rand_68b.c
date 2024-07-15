float VAR0;
float VAR1;
float VAR2;
void FUN0();
void FUN1()
{
    float data;
    data = 0.0F;
    data = (float)RAND32();
    VAR0 = data;
    FUN0();
}
extern float VAR0;
extern float VAR1;
extern float VAR2;
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
