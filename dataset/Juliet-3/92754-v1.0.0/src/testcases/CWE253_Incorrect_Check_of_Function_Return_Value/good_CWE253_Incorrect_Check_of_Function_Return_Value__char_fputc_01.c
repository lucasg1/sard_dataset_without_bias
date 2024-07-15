void FUN0()
{
    if (fputc((int)'A', stdout) == EOF)
    {
        printLine("fputc failed!");
    }
}
