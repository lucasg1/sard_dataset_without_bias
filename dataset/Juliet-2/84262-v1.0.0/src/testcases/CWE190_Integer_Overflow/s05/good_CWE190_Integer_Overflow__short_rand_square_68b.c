short VAR0;
short VAR1;
short VAR2;
void FUN0();
void FUN1();
void FUN2()
{
    short data;
    data = 0;
    data = 2;
    VAR1 = data;
    FUN0();
}
void FUN3()
{
    short data;
    data = 0;
    data = (short)RAND32();
    VAR2 = data;
    FUN1();
}
extern short VAR0;
extern short VAR1;
extern short VAR2;
void FUN0()
{
    short data = VAR1;
    {
        short result = data * data;
        printIntLine(result);
    }
}
void FUN1()
{
    short data = VAR2;
    if (abs((long)data) <= (long)sqrt((double)SHRT_MAX))
    {
        short result = data * data;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
