void FUN0()
{
    goto sink;
sink:
    if (fputs("string", stdout) == EOF)
    {
        printLine("fputs failed!");
    }
}
