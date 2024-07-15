static int staticTrue = 1; 
void FUN0() 
{
    if (globalReturnsTrueOrFalse() == staticTrue)
    {
        printLine("Sometimes prints");
    }
}
void FUN1() 
{
    FUN0();
}
