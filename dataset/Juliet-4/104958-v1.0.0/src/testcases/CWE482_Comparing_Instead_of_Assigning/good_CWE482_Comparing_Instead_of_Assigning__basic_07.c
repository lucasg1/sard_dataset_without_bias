static int staticFive = 5;
void FUN0()
{
    if(staticFive!=5)
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
    if(staticFive==5)
    {
        {
            int VAR0 = 0;
            printIntLine(VAR0);
            VAR0 = 5;
            printIntLine(VAR0);
        }
    }
}
