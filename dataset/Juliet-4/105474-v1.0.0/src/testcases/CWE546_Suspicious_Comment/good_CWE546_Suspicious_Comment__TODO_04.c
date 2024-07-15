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
        printLine("Hello");
    }
}
void FUN1()
{
    if(STATIC_CONST_TRUE)
    {
        printLine("Hello");
    }
}
