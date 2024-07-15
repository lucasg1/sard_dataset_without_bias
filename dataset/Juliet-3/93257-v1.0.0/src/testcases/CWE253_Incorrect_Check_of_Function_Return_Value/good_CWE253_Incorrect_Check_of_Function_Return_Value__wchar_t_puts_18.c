void FUN0()
{
    goto sink;
sink:
    if (PUTS(L"string") == WEOF)
    {
        printLine("puts failed!");
    }
}
