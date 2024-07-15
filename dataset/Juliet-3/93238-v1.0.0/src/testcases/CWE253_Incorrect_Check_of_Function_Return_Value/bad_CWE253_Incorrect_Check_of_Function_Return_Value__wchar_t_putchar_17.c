void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
    {
<START>
        if (putwchar((wchar_t)L'A') == 0)
<END>
        {
            printLine("putwchar failed!");
        }
    }
}
