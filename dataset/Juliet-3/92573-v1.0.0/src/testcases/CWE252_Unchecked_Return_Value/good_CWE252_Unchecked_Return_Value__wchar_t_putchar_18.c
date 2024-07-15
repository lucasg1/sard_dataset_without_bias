void FUN0()
{
    goto sink;
sink:
    if (putwchar((wchar_t)L'A') == WEOF)
    {
        printLine("putwchar failed!");
    }
}
