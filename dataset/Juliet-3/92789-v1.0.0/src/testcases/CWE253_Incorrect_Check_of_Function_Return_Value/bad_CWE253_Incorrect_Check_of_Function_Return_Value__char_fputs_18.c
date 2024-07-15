void FUN0()
{
    goto sink;
sink:
<START>
    if (fputs("string", stdout) == 0)
<END>
    {
        printLine("fputs failed!");
    }
}
