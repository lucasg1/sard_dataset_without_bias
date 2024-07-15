void FUN0()
{
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (putwchar((wchar_t)L'A') == WEOF)
        {
            printLine("putwchar failed!");
        }
    }
}
void FUN1()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        if (putwchar((wchar_t)L'A') == WEOF)
        {
            printLine("putwchar failed!");
        }
    }
}
