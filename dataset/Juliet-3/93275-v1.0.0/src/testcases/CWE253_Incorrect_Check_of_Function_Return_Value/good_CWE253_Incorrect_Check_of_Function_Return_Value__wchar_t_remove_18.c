void FUN0()
{
    goto sink;
sink:
    if (REMOVE(L"removemegood.txt") != 0)
    {
        printLine("remove failed!");
    }
}
