void FUN0()
{
    goto sink;
sink:
<START>
    if (PUTS("string") == 0)
<END>
    {
        printLine("puts failed!");
    }
}
