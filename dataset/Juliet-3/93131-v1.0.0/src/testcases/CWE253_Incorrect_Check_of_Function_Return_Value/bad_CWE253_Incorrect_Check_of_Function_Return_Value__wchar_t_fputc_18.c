void FUN0()
{
    goto sink;
sink:
<START>
    if (fputwc((wchar_t)L'A', stdout) == 0)
<END>
    {
        printLine("fputwc failed!");
    }
}
