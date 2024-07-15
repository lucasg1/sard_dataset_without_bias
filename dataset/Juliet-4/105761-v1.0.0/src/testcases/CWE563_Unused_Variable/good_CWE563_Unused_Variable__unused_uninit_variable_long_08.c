static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    long data;
    ; 
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 5L;
        printLongLine(data);
    }
}
void FUN3()
{
    long data;
    ; 
    if(FUN0())
    {
        data = 5L;
        printLongLine(data);
    }
}
