static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    if(FUN1())
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
void FUN3()
{
    if(FUN0())
    {
        {
            printLine("Inside the block");
        }
        printLine("Hello from good()");
    }
}
