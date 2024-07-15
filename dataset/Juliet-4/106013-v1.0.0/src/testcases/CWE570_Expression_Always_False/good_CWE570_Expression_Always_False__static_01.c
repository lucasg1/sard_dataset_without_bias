static int staticFalse = 0; 
void FUN0() 
{
    if (globalReturnsTrueOrFalse() == staticFalse)
    {
        printLine("Sometimes prints");
    }
}
void FUN1() 
{
    FUN0();
}
