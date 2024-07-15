void FUN0()
{
    goto sink;
sink:
    if (fprintf(stdout, "%s\n", "string") < 0)
    {
        printLine("fprintf failed!");
    }
}
