void FUN0()
{
    if (fwprintf(stdout, L"%s\n", L"string") < 0)
    {
        printLine("fwprintf failed!");
    }
}
