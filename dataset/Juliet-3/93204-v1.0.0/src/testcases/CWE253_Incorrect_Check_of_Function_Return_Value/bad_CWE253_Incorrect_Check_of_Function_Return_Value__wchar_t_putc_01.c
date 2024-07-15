void FUN0()
{
<START>
    if (putwc((wchar_t)L'A', stdout) == 0)
<END>
    {
        printLine("putwc failed!");
    }
}
