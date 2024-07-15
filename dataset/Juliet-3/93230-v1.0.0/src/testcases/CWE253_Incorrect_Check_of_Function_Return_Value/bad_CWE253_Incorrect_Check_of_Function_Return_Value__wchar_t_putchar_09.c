void FUN0()
{
    if(GLOBAL_CONST_TRUE)
    {
<START>
        if (putwchar((wchar_t)L'A') == 0)
<END>
        {
            printLine("putwchar failed!");
        }
    }
}
