void FUN0()
{
    if(0)
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
    if(1)
    {
        {
            printLine("Inside the block");
        }
        printLine("Hello from good()");
    }
}
