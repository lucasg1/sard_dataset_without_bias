static int VAR0;
static int VAR1;
static int VAR2;
void FUN0()
{
    int data = VAR1;
    {
        int result = data - 1;
        printIntLine(result);
    }
}
void FUN1()
{
    int data;
    data = 0;
    data = -2;
    VAR1 = data;
    FUN0();
}
void FUN2()
{
    int data = VAR2;
    if (data > INT_MIN)
    {
        int result = data - 1;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform subtraction.");
    }
}
void FUN3()
{
    int data;
    data = 0;
    data = INT_MIN;
    VAR2 = data;
    FUN2();
}
