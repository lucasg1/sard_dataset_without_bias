void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
<START>
        fputws(L"string", stdout);
<END>
    }
    else
    {
        if (fputws(L"string", stdout) == WEOF)
        {
            printLine("fputws failed!");
        }
    }
}
