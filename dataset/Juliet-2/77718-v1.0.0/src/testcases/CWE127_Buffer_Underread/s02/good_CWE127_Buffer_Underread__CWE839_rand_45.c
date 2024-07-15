static int VAR0;
static int VAR1;
static int VAR2;
void FUN0()
{
    int data = VAR1;
    {
        int buffer[10] = { 0 };
        if (data < 10)
        {
            printIntLine(buffer[data]);
        }
        else
        {
            printLine("ERROR: Array index is too big.");
        }
    }
}
void FUN1()
{
    int data;
    data = -1;
    data = 7;
    VAR1 = data;
    FUN0();
}
void FUN2()
{
    int data = VAR2;
    {
        int buffer[10] = { 0 };
        if (data >= 0 && data < (10))
        {
            printIntLine(buffer[data]);
        }
        else
        {
            printLine("ERROR: Array index is out-of-bounds");
        }
    }
}
void FUN3()
{
    int data;
    data = -1;
    data = RAND32();
    VAR2 = data;
    FUN2();
}
