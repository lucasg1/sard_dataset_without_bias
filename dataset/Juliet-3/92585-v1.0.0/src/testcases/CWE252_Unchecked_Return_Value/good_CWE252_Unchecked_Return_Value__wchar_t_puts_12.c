void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
        if (PUTS(L"string") == WEOF)
        {
            printLine("puts failed!");
        }
    }
    else
    {
        if (PUTS(L"string") == WEOF)
        {
            printLine("puts failed!");
        }
    }
}
