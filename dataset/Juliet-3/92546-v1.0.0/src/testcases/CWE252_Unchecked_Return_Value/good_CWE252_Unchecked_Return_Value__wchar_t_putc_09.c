void FUN0()
{
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (putwc((wchar_t)L'A', stdout) == WEOF)
        {
            printLine("putwc failed!");
        }
    }
}
void FUN1()
{
    if(GLOBAL_CONST_TRUE)
    {
        if (putwc((wchar_t)L'A', stdout) == WEOF)
        {
            printLine("putwc failed!");
        }
    }
}
