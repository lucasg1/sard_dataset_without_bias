void FUN0()
{
    goto sink;
sink:
    if (putc((int)'A', stdout) == EOF)
    {
        printLine("putc failed!");
    }
}
