void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
<START>
        if (fputws(L"string", stdout) == 0)
<END>
        {
            printLine("fputws failed!");
        }
    }
    else
    {
        if (fputws(L"string", stdout) == WEOF)
        {
            printLine("fputws failed!");
        }
    }
}
