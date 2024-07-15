void FUN0()
{
    if (fputs("string", stdout) == EOF)
    {
        printLine("fputs failed!");
    }
}
