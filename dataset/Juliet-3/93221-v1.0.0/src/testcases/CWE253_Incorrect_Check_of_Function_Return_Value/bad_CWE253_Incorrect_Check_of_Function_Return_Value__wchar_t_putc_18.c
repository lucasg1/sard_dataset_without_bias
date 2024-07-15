void FUN0()
{
    goto sink;
sink:
<START>
    if (putwc((wchar_t)L'A', stdout) == 0)
<END>
    {
        printLine("putwc failed!");
    }
}
