void FUN0()
{
    if (putc((int)'A', stdout) == EOF)
    {
        printLine("putc failed!");
    }
}
