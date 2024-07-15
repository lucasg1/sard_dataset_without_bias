void FUN0()
{
    if(globalFive!=5)
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
    if(globalFive==5)
    {
        {
            printLine("Inside the block");
        }
        printLine("Hello from good()");
    }
}
