void FUN0()
{
<START>
    if (fwprintf(stdout, L"%s\n", L"string") == 0)
<END>
    {
        printLine("fwprintf failed!");
    }
}
