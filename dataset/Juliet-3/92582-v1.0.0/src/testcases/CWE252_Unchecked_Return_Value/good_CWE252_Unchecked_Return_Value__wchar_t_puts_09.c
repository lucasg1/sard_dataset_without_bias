void FUN0()
{
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (PUTS(L"string") == WEOF)
        {
            printLine("puts failed!");
        }
    }
}
void FUN1()
{
    if(GLOBAL_CONST_TRUE)
    {
        if (PUTS(L"string") == WEOF)
        {
            printLine("puts failed!");
        }
    }
}
