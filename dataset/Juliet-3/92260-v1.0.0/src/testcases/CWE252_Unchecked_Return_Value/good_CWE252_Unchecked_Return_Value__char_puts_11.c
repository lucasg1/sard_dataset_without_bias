void FUN0()
{
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (PUTS("string") == EOF)
        {
            printLine("puts failed!");
        }
    }
}
void FUN1()
{
    if(globalReturnsTrue())
    {
        if (PUTS("string") == EOF)
        {
            printLine("puts failed!");
        }
    }
}
