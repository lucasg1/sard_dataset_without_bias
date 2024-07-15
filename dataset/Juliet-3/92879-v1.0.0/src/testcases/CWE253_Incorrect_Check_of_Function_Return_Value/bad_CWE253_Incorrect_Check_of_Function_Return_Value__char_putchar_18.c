void FUN0()
{
    goto sink;
sink:
<START>
    if (putchar((int)'A') == 0)
<END>
    {
        printLine("putchar failed!");
    }
}
