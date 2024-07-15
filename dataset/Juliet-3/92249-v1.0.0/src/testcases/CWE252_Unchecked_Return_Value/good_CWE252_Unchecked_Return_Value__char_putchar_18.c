void FUN0()
{
    goto sink;
sink:
    if (putchar((int)'A') == EOF)
    {
        printLine("putchar failed!");
    }
}
