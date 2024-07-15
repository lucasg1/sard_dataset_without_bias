void FUN0()
{
    goto sink;
sink:
<START>
    if (fprintf(stdout, "%s\n", "string") == 0)
<END>
    {
        printLine("fprintf failed!");
    }
}
