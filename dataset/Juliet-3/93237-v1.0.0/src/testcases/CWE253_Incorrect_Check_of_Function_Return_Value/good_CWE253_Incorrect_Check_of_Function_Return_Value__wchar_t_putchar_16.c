void FUN0()
{
    while(1)
    {
        if (putwchar((wchar_t)L'A') == WEOF)
        {
            printLine("putwchar failed!");
        }
        break;
    }
}
