void FUN0()
{
    while(1)
    {
<START>
        if (putwchar((wchar_t)L'A') == 0)
<END>
        {
            printLine("putwchar failed!");
        }
        break;
    }
}
