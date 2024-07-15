static short VAR0;
static short VAR1;
static short VAR2;
void FUN0()
{
    short data = VAR0;
    {
<START>
        short result = data * data;
<END>
        printIntLine(result);
    }
}
void FUN1()
{
    short data;
    data = 0;
    data = (short)RAND32();
    VAR0 = data;
    FUN0();
}
