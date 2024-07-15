void FUN0()
{
    if (putwchar((wchar_t)L'A') == WEOF)
    {
        printLine("putwchar failed!");
    }
}
