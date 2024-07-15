static int FUN0() 
{
    return 1;
}
void FUN1() 
{
    if (globalReturnsTrueOrFalse() == FUN0())
    {
        printLine("Sometimes prints");
    }
}
void FUN2() 
{
    FUN1();
}
