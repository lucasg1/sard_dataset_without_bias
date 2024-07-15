void FUN0()
{
    if (fputws(L"string", stdout) == WEOF)
    {
        printLine("fputws failed!");
    }
}
