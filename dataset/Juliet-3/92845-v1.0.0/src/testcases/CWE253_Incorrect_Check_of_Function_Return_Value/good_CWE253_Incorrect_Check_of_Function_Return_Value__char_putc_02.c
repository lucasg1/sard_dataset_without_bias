void FUN0()
{
    if(0)
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
void FUN1()
{
    if(1)
    {
        if (putc((int)'A', stdout) == EOF)
        {
            printLine("putc failed!");
        }
    }
}
