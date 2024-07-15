void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
<START>
        fwrite((wchar_t *)L"string", sizeof(wchar_t), wcslen(L"string"), stdout);
<END>
    }
    else
    {
        if (fwrite((wchar_t *)L"string", sizeof(wchar_t), wcslen(L"string"), stdout) != wcslen(L"string"))
        {
            printLine("fwrite failed!");
        }
    }
}
