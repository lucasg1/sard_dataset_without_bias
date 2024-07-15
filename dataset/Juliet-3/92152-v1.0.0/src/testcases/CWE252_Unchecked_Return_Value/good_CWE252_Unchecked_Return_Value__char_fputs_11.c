void FUN0()
{
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (fputs("string", stdout) == EOF)
        {
            printLine("fputs failed!");
        }
    }
}
void FUN1()
{
    if(globalReturnsTrue())
    {
        if (fputs("string", stdout) == EOF)
        {
            printLine("fputs failed!");
        }
    }
}
