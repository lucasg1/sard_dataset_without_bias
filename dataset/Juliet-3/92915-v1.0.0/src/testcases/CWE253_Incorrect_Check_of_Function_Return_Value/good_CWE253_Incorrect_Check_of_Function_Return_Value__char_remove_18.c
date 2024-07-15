void FUN0()
{
    goto sink;
sink:
    if (REMOVE("removemegood.txt") != 0)
    {
        printLine("remove failed!");
    }
}
