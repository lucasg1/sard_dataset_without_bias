void FUN0()
{
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        printLine("Not in path");
    }
}
void FUN1()
{
    if(globalReturnsTrue())
    {
        printLine("Not in path");
    }
}
