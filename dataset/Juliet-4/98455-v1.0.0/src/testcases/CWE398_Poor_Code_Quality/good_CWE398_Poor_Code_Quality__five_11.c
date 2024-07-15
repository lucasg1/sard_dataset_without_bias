void FUN0()
{
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        printLine("Hello from good()");
    }
}
void FUN1()
{
    if(globalReturnsTrue())
    {
        printLine("Hello from good()");
    }
}
