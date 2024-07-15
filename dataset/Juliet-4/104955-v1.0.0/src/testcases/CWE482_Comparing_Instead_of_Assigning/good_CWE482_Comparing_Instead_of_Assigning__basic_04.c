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
        {
            int VAR0 = 0;
            printIntLine(VAR0);
            VAR0 = 5;
            printIntLine(VAR0);
        }
    }
}
void FUN1()
{
    if(STATIC_CONST_TRUE)
    {
        {
            int VAR0 = 0;
            printIntLine(VAR0);
            VAR0 = 5;
            printIntLine(VAR0);
        }
    }
}
