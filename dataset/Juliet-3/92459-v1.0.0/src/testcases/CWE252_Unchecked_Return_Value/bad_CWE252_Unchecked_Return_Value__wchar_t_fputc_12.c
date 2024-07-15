void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
<START>
        fputwc((wchar_t)L'A', stdout);
<END>
    }
    else
    {
        if (fputwc((wchar_t)L'A', stdout) == WEOF)
        {
            printLine("fputwc failed!");
        }
    }
}
