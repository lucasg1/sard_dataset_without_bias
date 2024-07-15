void FUN0()
{
    goto sink;
sink:
<START>
    if (REMOVE("removemebad.txt") == 0)
<END>
    {
        printLine("remove failed!");
    }
}
