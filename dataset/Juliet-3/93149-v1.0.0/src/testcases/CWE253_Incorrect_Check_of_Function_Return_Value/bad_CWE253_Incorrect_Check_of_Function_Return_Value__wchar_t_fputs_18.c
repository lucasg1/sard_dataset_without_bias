void FUN0()
{
    goto sink;
sink:
<START>
    if (fputws(L"string", stdout) == 0)
<END>
    {
        printLine("fputws failed!");
    }
}
