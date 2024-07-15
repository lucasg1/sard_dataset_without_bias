void FUN0()
{
    goto sink;
sink:
<START>
    if (putwchar((wchar_t)L'A') == 0)
<END>
    {
        printLine("putwchar failed!");
    }
}
