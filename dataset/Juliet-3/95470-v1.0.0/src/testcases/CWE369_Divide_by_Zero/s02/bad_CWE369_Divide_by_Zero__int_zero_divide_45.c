static int VAR0;
static int VAR1;
static int VAR2;
void FUN0()
{
    int data = VAR0;
<START>
    printIntLine(100 / data);
<END>
}
void FUN1()
{
    int data;
    data = -1;
    data = 0;
    VAR0 = data;
    FUN0();
}
