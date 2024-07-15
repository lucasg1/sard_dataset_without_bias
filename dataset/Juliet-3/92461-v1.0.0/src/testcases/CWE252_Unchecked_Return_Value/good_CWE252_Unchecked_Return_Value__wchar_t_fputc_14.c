void FUN0()
{
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (fputwc((wchar_t)L'A', stdout) == WEOF)
        {
            printLine("fputwc failed!");
        }
    }
}
void FUN1()
{
    if(globalFive==5)
    {
        if (fputwc((wchar_t)L'A', stdout) == WEOF)
        {
            printLine("fputwc failed!");
        }
    }
}
