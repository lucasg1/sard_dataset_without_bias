void FUN0()
{
    if(globalReturnsFalse())
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
    if(globalReturnsTrue())
    {
        printLine("Hello");
    }
}
