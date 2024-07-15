void FUN0()
{
    goto sink;
sink:
    if (PUTS("string") == EOF)
    {
        printLine("puts failed!");
    }
}
