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
    int data;
    data = 5;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        printIntLine(data);
    }
}
void FUN3()
{
    int data;
    data = 5;
    if(FUN0())
    {
        printIntLine(data);
    }
}
