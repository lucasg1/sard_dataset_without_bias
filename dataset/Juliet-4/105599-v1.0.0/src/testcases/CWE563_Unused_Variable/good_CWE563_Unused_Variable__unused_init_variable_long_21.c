static int VAR0 = 0;
static int VAR1 = 0;
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
