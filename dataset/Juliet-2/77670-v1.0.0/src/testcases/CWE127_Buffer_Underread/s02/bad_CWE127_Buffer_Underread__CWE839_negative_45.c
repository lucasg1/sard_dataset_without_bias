static int VAR0;
static int VAR1;
static int VAR2;
void FUN0()
{
    int data = VAR0;
    {
        int buffer[10] = { 0 };
        if (data < 10)
        {
<START>
            printIntLine(buffer[data]);
<END>
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
    data = -5;
    VAR0 = data;
    FUN0();
}
