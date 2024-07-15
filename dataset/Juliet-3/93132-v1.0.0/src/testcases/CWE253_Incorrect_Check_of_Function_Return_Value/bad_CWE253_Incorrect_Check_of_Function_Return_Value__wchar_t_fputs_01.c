void FUN0()
{
<START>
    if (fputws(L"string", stdout) == 0)
<END>
    {
        printLine("fputws failed!");
    }
}
