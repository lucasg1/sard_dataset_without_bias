void FUN0()
{
    goto sink;
sink:
    if (putwc((wchar_t)L'A', stdout) == WEOF)
    {
        printLine("putwc failed!");
    }
}
