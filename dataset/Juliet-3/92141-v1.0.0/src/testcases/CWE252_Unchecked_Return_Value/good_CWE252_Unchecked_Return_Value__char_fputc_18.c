void FUN0()
{
    goto sink;
sink:
    if (fputc((int)'A', stdout) == EOF)
    {
        printLine("fputc failed!");
    }
}
