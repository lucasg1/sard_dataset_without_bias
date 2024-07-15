void FUN0()
{
    if(globalFive!=5)
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
    if(globalFive==5)
    {
        if (putwc((wchar_t)L'A', stdout) == WEOF)
        {
            printLine("putwc failed!");
        }
    }
}
