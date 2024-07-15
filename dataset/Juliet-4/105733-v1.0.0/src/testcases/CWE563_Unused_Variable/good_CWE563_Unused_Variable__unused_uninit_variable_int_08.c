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
    ; 
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 5;
        printIntLine(data);
    }
}
void FUN3()
{
    int data;
    ; 
    if(FUN0())
    {
        data = 5;
        printIntLine(data);
    }
}
