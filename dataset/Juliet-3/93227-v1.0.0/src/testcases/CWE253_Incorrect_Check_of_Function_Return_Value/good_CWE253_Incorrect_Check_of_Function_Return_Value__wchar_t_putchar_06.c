static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE!=5)
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
    if(STATIC_CONST_FIVE==5)
    {
        if (putwchar((wchar_t)L'A') == WEOF)
        {
            printLine("putwchar failed!");
        }
    }
}
