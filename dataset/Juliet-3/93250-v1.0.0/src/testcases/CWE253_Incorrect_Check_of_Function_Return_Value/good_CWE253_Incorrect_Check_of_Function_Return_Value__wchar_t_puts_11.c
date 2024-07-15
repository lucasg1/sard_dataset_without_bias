void FUN0()
{
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (PUTS(L"string") == WEOF)
        {
            printLine("puts failed!");
        }
    }
}
void FUN1()
{
    if(globalReturnsTrue())
    {
        if (PUTS(L"string") == WEOF)
        {
            printLine("puts failed!");
        }
    }
}
