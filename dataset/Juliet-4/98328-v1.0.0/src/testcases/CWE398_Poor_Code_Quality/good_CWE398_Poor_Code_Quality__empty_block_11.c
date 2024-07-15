void FUN0()
{
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            printLine("Inside the block");
        }
        printLine("Hello from good()");
    }
}
void FUN1()
{
    if(globalReturnsTrue())
    {
        {
            printLine("Inside the block");
        }
        printLine("Hello from good()");
    }
}
