void FUN0()
{
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (putc((int)'A', stdout) == EOF)
        {
            printLine("putc failed!");
        }
    }
}
void FUN1()
{
    if(globalReturnsTrue())
    {
        if (putc((int)'A', stdout) == EOF)
        {
            printLine("putc failed!");
        }
    }
}
