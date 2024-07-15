void FUN0()
{
<START>
    if (fputc((int)'A', stdout) == 0)
<END>
    {
        printLine("fputc failed!");
    }
}
