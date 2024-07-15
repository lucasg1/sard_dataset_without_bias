void FUN0()
{
    int k;
    for(k = 0; k < 1; k++)
    {
        if (fwrite((wchar_t *)L"string", sizeof(wchar_t), wcslen(L"string"), stdout) != wcslen(L"string"))
        {
            printLine("fwrite failed!");
        }
    }
}
