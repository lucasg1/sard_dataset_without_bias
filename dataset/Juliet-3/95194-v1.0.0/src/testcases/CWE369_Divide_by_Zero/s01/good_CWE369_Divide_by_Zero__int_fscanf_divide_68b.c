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
    fscanf(stdin, "%d", &data);
    VAR2 = data;
    FUN1();
}
extern int VAR0;
extern int VAR1;
extern int VAR2;
void FUN0()
{
    int data = VAR1;
    printIntLine(100 / data);
}
void FUN1()
{
    int data = VAR2;
    if( data != 0 )
    {
        printIntLine(100 / data);
    }
    else
    {
        printLine("This would result in a divide by zero");
    }
}
