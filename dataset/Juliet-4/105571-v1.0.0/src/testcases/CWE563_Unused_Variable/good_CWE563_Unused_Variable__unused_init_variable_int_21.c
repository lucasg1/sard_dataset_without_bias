static int VAR0 = 0;
static int VAR1 = 0;
void FUN0(int data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        printIntLine(data);
    }
}
void FUN1()
{
    int data;
    data = 5;
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(int data)
{
    if(VAR1)
    {
        printIntLine(data);
    }
}
void FUN3()
{
    int data;
    data = 5;
    VAR1 = 1; 
    FUN2(data);
}
