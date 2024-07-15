void FUN0()
{
    goto sink;
sink:
    if (fwprintf(stdout, L"%s\n", L"string") < 0)
    {
        printLine("fwprintf failed!");
    }
}
