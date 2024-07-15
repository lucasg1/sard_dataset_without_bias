void FUN0()
{
    if(GLOBAL_CONST_FALSE)
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
    if(GLOBAL_CONST_TRUE)
    {
        {
            printLine("Inside the block");
        }
        printLine("Hello from good()");
    }
}
