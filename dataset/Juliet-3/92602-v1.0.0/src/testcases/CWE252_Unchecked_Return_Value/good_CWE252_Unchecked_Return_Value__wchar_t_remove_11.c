void FUN0()
{
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (REMOVE(L"removemegood.txt") != 0)
        {
            printLine("remove failed!");
        }
    }
}
void FUN1()
{
    if(globalReturnsTrue())
    {
        if (REMOVE(L"removemegood.txt") != 0)
        {
            printLine("remove failed!");
        }
    }
}
