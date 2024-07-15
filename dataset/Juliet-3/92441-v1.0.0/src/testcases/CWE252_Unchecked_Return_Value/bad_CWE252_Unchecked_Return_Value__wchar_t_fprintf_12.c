void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
<START>
        fwprintf(stdout, L"%s\n", L"string");
<END>
    }
    else
    {
        if (fwprintf(stdout, L"%s\n", L"string") < 0)
        {
            printLine("fwprintf failed!");
        }
    }
}
