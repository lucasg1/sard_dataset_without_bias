void FUN0()
{
    if(globalFalse)
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
    if(globalTrue)
    {
        {
            int VAR0 = 0;
            printIntLine(VAR0);
            VAR0 = 5;
            printIntLine(VAR0);
        }
    }
}
