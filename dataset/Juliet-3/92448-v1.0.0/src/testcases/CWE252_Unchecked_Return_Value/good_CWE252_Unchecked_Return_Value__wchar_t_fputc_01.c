void FUN0()
{
    if (fputwc((wchar_t)L'A', stdout) == WEOF)
    {
        printLine("fputwc failed!");
    }
}
