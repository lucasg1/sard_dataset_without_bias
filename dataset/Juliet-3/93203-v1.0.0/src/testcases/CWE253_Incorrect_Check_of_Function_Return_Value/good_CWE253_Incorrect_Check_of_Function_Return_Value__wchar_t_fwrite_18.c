void FUN0()
{
    goto sink;
sink:
    if (fwrite((wchar_t *)L"string", sizeof(wchar_t), wcslen(L"string"), stdout) != wcslen(L"string"))
    {
        printLine("fwrite failed!");
    }
}
