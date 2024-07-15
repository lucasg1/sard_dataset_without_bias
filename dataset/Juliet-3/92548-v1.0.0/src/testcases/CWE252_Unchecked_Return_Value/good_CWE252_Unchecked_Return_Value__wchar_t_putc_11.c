void FUN0()
{
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (putwc((wchar_t)L'A', stdout) == WEOF)
        {
            printLine("putwc failed!");
        }
    }
}
void FUN1()
{
    if(globalReturnsTrue())
    {
        if (putwc((wchar_t)L'A', stdout) == WEOF)
        {
            printLine("putwc failed!");
        }
    }
}
