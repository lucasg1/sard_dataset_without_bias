void FUN0()
{
    if(5!=5)
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
    if(5==5)
    {
        if (PUTS("string") == EOF)
        {
            printLine("puts failed!");
        }
    }
}
