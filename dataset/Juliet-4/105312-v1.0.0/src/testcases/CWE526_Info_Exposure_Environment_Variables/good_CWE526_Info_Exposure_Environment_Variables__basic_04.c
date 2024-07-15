static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        printLine("Not in path");
    }
}
void FUN1()
{
    if(STATIC_CONST_TRUE)
    {
        printLine("Not in path");
    }
}
