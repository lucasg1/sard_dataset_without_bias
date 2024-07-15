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
        data = 5;
        printIntLine(data);
    }
}
void FUN1()
{
    int data;
    ; 
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(int data)
{
    if(VAR1)
    {
        data = 5;
        printIntLine(data);
    }
}
void FUN3()
{
    int data;
    ; 
    VAR1 = 1; 
    FUN2(data);
}
