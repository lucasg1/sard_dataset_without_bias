void FUN0()
{
    if(globalFalse)
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
    if(globalTrue)
    {
        if (fwprintf(stdout, L"%s\n", L"string") < 0)
        {
            printLine("fwprintf failed!");
        }
    }
}
