void FUN0()
{
<START>
    if (putc((int)'A', stdout) == 0)
<END>
    {
        printLine("putc failed!");
    }
}
