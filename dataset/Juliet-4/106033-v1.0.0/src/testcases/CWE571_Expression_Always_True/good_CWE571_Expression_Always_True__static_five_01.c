static int staticFive = 5;
void FUN0() 
{
    if ((globalReturnsTrueOrFalse() + 5) == 5) 
    {
        printLine("Sometimes prints");
    }
}
void FUN1() 
{
    FUN0();
}
