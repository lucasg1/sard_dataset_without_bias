static int VAR0;
static int VAR1;
static int VAR2;
void FUN0()
{
    int data = VAR1;
    {
        int i;
        int buffer[10] = { 0 };
        if (data < 10)
        {
            buffer[data] = 1;
            for(i = 0; i < 10; i++)
            {
                printIntLine(buffer[i]);
            }
        }
        else
        {
            printLine("ERROR: Array index is negative.");
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
        int i;
        int buffer[10] = { 0 };
        if (data >= 0 && data < (10))
        {
            buffer[data] = 1;
            for(i = 0; i < 10; i++)
            {
                printIntLine(buffer[i]);
            }
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
