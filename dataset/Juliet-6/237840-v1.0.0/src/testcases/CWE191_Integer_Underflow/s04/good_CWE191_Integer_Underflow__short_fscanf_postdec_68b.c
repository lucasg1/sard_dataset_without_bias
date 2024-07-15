short VAR0;
short VAR1;
short VAR2;
void FUN0();
void FUN1();
void FUN2()
{
    short data;
    data = 0;
    data = -2;
    VAR1 = data;
    FUN0();
}
void FUN3()
{
    short data;
    data = 0;
    fscanf (stdin, "%hd", &data);
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
        data--;
        short result = data;
        printIntLine(result);
    }
}
void FUN1()
{
    short data = VAR2;
    if (data > SHRT_MIN)
    {
        data--;
        short result = data;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
