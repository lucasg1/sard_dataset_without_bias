void FUN0()
{
<START>
    if (fprintf(stdout, "%s\n", "string") == 0)
<END>
    {
        printLine("fprintf failed!");
    }
}
