void FUN0()
{
    if(globalTrue)
    {
<START>
        if (putwchar((wchar_t)L'A') == 0)
<END>
        {
            printLine("putwchar failed!");
        }
    }
}
