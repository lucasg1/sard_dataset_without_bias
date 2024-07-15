void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
<START>
        putwc((wchar_t)L'A', stdout);
<END>
    }
    else
    {
        if (putwc((wchar_t)L'A', stdout) == WEOF)
        {
            printLine("putwc failed!");
        }
    }
}
