void FUN0()
{
    if (fprintf(stdout, "%s\n", "string") < 0)
    {
        printLine("fprintf failed!");
    }
}
