void FUN0()
{
    int k;
    for(k = 0; k < 1; k++)
    {
        if (putwchar((wchar_t)L'A') == WEOF)
        {
            printLine("putwchar failed!");
        }
    }
}
