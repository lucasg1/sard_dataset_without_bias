static const int STATIC_CONST_TRUE = 1; 
void FUN0() 
{
    if (globalReturnsTrueOrFalse() == STATIC_CONST_TRUE)
    {
        printLine("Sometimes prints");
    }
}
void FUN1() 
{
    FUN0();
}
