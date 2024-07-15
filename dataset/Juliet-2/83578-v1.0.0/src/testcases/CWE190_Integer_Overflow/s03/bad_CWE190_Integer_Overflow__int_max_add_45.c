static int VAR0;
static int VAR1;
static int VAR2;
void FUN0()
{
    int data = VAR0;
    {
        int result = data + 1;
        printIntLine(result);
    }
}
void FUN1()
{
    int data;
    data = 0;
<START>
    data = INT_MAX;
<END>
    VAR0 = data;
    FUN0();
}
