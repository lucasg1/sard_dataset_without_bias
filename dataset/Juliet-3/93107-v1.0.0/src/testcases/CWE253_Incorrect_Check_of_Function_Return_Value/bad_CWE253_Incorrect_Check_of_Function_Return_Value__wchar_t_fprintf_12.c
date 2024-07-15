void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
<START>
        if (fwprintf(stdout, L"%s\n", L"string") == 0)
<END>
        {
            printLine("fwprintf failed!");
        }
    }
    else
    {
        if (fwprintf(stdout, L"%s\n", L"string") < 0)
        {
            printLine("fwprintf failed!");
        }
    }
}
