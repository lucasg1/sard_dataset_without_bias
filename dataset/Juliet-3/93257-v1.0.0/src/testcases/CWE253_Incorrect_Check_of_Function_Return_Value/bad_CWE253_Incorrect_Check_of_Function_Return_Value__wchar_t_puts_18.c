void FUN0()
{
    goto sink;
sink:
<START>
    if (PUTS(L"string") == 0)
<END>
    {
        printLine("puts failed!");
    }
}
