void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        if (fwrite((wchar_t *)L"string", sizeof(wchar_t), wcslen(L"string"), stdout) != wcslen(L"string"))
        {
            printLine("fwrite failed!");
        }
        break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
        if (fwrite((wchar_t *)L"string", sizeof(wchar_t), wcslen(L"string"), stdout) != wcslen(L"string"))
        {
            printLine("fwrite failed!");
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
