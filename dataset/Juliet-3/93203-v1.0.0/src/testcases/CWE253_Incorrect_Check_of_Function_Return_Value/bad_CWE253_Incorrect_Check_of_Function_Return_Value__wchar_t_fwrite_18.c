void FUN0()
{
    goto sink;
sink:
<START>
    if (fwrite((wchar_t *)L"string", sizeof(wchar_t), wcslen(L"string"), stdout) < 0)
<END>
    {
        printLine("fwrite failed!");
    }
}
