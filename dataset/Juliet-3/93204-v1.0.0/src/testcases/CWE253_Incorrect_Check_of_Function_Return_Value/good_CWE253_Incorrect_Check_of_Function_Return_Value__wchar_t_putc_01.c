void FUN0()
{
    if (putwc((wchar_t)L'A', stdout) == WEOF)
    {
        printLine("putwc failed!");
    }
}
