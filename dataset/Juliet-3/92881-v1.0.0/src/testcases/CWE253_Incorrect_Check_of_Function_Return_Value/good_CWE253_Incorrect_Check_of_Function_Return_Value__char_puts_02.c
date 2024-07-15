void FUN0()
{
    if(0)
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
    if(1)
    {
        if (PUTS("string") == EOF)
        {
            printLine("puts failed!");
        }
    }
}
