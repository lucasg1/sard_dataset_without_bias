static int FUN0(void)
{
    return 5;
}
void FUN1() 
{
    int VAR0 = FUN0();
    printIntLine(VAR0);
}
void FUN2() 
{
    FUN1();
}
