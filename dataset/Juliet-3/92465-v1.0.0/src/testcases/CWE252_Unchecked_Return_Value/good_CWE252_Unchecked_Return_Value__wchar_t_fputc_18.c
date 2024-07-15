void FUN0()
{
    goto sink;
sink:
    if (fputwc((wchar_t)L'A', stdout) == WEOF)
    {
        printLine("fputwc failed!");
    }
}
