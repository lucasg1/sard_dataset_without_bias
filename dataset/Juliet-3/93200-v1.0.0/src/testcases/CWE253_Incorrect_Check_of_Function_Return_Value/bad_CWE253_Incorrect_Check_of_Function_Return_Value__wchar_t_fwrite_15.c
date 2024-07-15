void FUN0()
{
    switch(6)
    {
    case 6:
<START>
        if (fwrite((wchar_t *)L"string", sizeof(wchar_t), wcslen(L"string"), stdout) < 0)
<END>
        {
            printLine("fwrite failed!");
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
