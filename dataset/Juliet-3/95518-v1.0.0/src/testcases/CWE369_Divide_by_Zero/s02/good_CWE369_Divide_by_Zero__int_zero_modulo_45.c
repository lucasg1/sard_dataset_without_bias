static int VAR0;
static int VAR1;
static int VAR2;
void FUN0()
{
    int data = VAR1;
    printIntLine(100 % data);
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
    if( data != 0 )
    {
        printIntLine(100 % data);
    }
    else
    {
        printLine("This would result in a divide by zero");
    }
}
void FUN3()
{
    int data;
    data = -1;
    data = 0;
    VAR2 = data;
    FUN2();
}
