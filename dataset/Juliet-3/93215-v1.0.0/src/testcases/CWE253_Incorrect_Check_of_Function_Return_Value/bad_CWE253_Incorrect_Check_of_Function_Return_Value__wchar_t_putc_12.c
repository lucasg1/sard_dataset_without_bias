void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
<START>
        if (putwc((wchar_t)L'A', stdout) == 0)
<END>
        {
            printLine("putwc failed!");
        }
    }
    else
    {
        if (putwc((wchar_t)L'A', stdout) == WEOF)
        {
            printLine("putwc failed!");
        }
    }
}
