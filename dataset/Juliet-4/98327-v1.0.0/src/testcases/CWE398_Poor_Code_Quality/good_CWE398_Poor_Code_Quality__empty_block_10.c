void FUN0()
{
    if(globalFalse)
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
    if(globalTrue)
    {
        {
            printLine("Inside the block");
        }
        printLine("Hello from good()");
    }
}
