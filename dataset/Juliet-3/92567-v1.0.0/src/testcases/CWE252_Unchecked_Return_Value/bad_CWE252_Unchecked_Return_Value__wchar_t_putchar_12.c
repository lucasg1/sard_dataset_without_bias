void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
<START>
        putwchar((wchar_t)L'A');
<END>
    }
    else
    {
        if (putwchar((wchar_t)L'A') == WEOF)
        {
            printLine("putwchar failed!");
        }
    }
}
