void FUN0()
{
    if(GLOBAL_CONST_FALSE)
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
    if(GLOBAL_CONST_TRUE)
    {
        {
            int VAR0 = 0;
            printIntLine(VAR0);
            VAR0 = 5;
            printIntLine(VAR0);
        }
    }
}
