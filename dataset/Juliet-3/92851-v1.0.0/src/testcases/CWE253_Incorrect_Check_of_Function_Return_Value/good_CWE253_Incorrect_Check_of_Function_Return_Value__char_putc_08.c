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
        if (putc((int)'A', stdout) == EOF)
        {
            printLine("putc failed!");
        }
    }
}
void FUN3()
{
    if(FUN0())
    {
        if (putc((int)'A', stdout) == EOF)
        {
            printLine("putc failed!");
        }
    }
}
