void FUN0()
{
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (PUTS("string") == EOF)
        {
            printLine("puts failed!");
        }
    }
}
void FUN1()
{
    if(globalTrue)
    {
        if (PUTS("string") == EOF)
        {
            printLine("puts failed!");
        }
    }
}
