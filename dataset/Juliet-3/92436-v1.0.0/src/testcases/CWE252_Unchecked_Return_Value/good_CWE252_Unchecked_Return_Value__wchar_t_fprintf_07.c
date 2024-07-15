static int staticFive = 5;
void FUN0()
{
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (fwprintf(stdout, L"%s\n", L"string") < 0)
        {
            printLine("fwprintf failed!");
        }
    }
}
void FUN1()
{
    if(staticFive==5)
    {
        if (fwprintf(stdout, L"%s\n", L"string") < 0)
        {
            printLine("fwprintf failed!");
        }
    }
}
