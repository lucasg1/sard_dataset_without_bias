void FUN0()
{
    goto sink;
sink:
<START>
    if (putc((int)'A', stdout) == 0)
<END>
    {
        printLine("putc failed!");
    }
}
