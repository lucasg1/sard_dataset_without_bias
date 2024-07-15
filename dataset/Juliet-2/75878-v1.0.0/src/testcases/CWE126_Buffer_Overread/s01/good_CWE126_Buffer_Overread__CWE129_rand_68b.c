int VAR0;
int VAR1;
int VAR2;
void FUN0();
void FUN1();
void FUN2()
{
    int data;
    data = -1;
    data = 7;
    VAR1 = data;
    FUN0();
}
void FUN3()
{
    int data;
    data = -1;
    data = RAND32();
    VAR2 = data;
    FUN1();
}
extern int VAR0;
extern int VAR1;
extern int VAR2;
void FUN0()
{
    int data = VAR1;
    {
        int buffer[10] = { 0 };
        if (data >= 0)
        {
            printIntLine(buffer[data]);
        }
        else
        {
            printLine("ERROR: Array index is negative");
        }
    }
}
void FUN1()
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
