static int VAR0 = 0;
static int VAR1 = 0;
static int VAR2 = 0;
void FUN0(int64_t data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        printLongLongLine(data);
    }
}
void FUN1()
{
    int64_t data;
    data = 5LL;
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(int64_t data)
{
    if(VAR1)
    {
        printLongLongLine(data);
    }
}
void FUN3()
{
    int64_t data;
    data = 5LL;
    VAR1 = 1; 
    FUN2(data);
}
void FUN4(int64_t data)
{
    if(VAR2)
    {
        data = 10LL;
        printLongLongLine(data);
    }
}
void FUN5()
{
    int64_t data;
    data = 5LL;
    printLongLongLine(data);
    VAR2 = 1; 
    FUN4(data);
}
