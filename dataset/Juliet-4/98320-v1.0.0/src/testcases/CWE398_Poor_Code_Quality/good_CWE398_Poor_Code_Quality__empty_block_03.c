void FUN0()
{
    if(5!=5)
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
    if(5==5)
    {
        {
            printLine("Inside the block");
        }
        printLine("Hello from good()");
    }
}
