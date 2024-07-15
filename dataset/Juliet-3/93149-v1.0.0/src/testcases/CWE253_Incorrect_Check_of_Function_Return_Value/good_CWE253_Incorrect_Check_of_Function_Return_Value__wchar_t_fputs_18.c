void FUN0()
{
    goto sink;
sink:
    if (fputws(L"string", stdout) == WEOF)
    {
        printLine("fputws failed!");
    }
}
