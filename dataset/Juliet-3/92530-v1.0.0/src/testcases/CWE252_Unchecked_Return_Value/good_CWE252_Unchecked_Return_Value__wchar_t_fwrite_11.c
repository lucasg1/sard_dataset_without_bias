void FUN0()
{
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (fwrite((wchar_t *)L"string", sizeof(wchar_t), wcslen(L"string"), stdout) != wcslen(L"string"))
        {
            printLine("fwrite failed!");
        }
    }
}
void FUN1()
{
    if(globalReturnsTrue())
    {
        if (fwrite((wchar_t *)L"string", sizeof(wchar_t), wcslen(L"string"), stdout) != wcslen(L"string"))
        {
            printLine("fwrite failed!");
        }
    }
}
