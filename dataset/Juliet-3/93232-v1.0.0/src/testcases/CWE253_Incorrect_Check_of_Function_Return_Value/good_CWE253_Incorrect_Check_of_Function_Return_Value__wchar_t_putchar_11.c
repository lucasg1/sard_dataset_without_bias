void FUN0()
{
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (putwchar((wchar_t)L'A') == WEOF)
        {
            printLine("putwchar failed!");
        }
    }
}
void FUN1()
{
    if(globalReturnsTrue())
    {
        if (putwchar((wchar_t)L'A') == WEOF)
        {
            printLine("putwchar failed!");
        }
    }
}
