void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
        if (fputwc((wchar_t)L'A', stdout) == WEOF)
        {
            printLine("fputwc failed!");
        }
    }
    else
    {
        if (fputwc((wchar_t)L'A', stdout) == WEOF)
        {
            printLine("fputwc failed!");
        }
    }
}
