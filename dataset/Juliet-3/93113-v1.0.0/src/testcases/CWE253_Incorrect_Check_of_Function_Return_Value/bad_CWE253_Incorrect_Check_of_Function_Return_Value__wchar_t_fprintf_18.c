void FUN0()
{
    goto sink;
sink:
<START>
    if (fwprintf(stdout, L"%s\n", L"string") == 0)
<END>
    {
        printLine("fwprintf failed!");
    }
}
