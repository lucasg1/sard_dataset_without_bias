short VAR0;
short VAR1;
short VAR2;
void FUN0();
void FUN1()
{
    short data;
    data = 0;
    data = (short)RAND32();
    VAR0 = data;
    FUN0();
}
extern short VAR0;
extern short VAR1;
extern short VAR2;
void FUN0()
{
    short data = VAR0;
    {
<START>
        short result = data - 1;
<END>
        printIntLine(result);
    }
}
