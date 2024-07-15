void FUN0()
{
    if(globalFalse)
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
    if(globalTrue)
    {
        if (PUTS(L"string") == WEOF)
        {
            printLine("puts failed!");
        }
    }
}
