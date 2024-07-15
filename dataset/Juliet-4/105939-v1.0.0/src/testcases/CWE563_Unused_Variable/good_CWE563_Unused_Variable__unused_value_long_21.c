static int VAR0 = 0;
static int VAR1 = 0;
static int VAR2 = 0;
void FUN0(long data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        printLongLine(data);
    }
}
void FUN1()
{
    long data;
    data = 5L;
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(long data)
{
    if(VAR1)
    {
        printLongLine(data);
    }
}
void FUN3()
{
    long data;
    data = 5L;
    VAR1 = 1; 
    FUN2(data);
}
void FUN4(long data)
{
    if(VAR2)
    {
        data = 10L;
        printLongLine(data);
    }
}
void FUN5()
{
    long data;
    data = 5L;
    printLongLine(data);
    VAR2 = 1; 
    FUN4(data);
}
