void FUN0()
{
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (fputws(L"string", stdout) == WEOF)
        {
            printLine("fputws failed!");
        }
    }
}
void FUN1()
{
    if(globalFive==5)
    {
        if (fputws(L"string", stdout) == WEOF)
        {
            printLine("fputws failed!");
        }
    }
}
