void FUN0()
{
    goto sink;
sink:
<START>
    if (fputc((int)'A', stdout) == 0)
<END>
    {
        printLine("fputc failed!");
    }
}
