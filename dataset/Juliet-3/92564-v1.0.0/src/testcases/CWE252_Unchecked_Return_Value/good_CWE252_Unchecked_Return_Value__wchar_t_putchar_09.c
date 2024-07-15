void FUN0()
{
    if(GLOBAL_CONST_FALSE)
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
    if(GLOBAL_CONST_TRUE)
    {
        if (putwchar((wchar_t)L'A') == WEOF)
        {
            printLine("putwchar failed!");
        }
    }
}
