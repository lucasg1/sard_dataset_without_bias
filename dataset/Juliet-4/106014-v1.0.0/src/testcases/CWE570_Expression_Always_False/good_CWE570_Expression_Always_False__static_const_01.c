static const int STATIC_CONST_FALSE = 0; 
void FUN0() 
{
    if (globalReturnsTrueOrFalse() == STATIC_CONST_FALSE)
    {
        printLine("Sometimes prints");
    }
}
void FUN1() 
{
    FUN0();
}
