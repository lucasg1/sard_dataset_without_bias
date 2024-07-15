void FUN0()
{
    goto sink;
sink:
<START>
    if (REMOVE(L"removemebad.txt") == 0)
<END>
    {
        printLine("remove failed!");
    }
}
